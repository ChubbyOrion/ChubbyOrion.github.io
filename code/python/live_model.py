import subprocess
import pickle
import pomegranate
import io
import numpy


def direction(val, rng):
    if -rng < val < rng:
        return "S"
    elif val > rng:
        return "R"
    else:
        return "L"

def main():
    with open("model_50n_5r.pkl", 'rb') as inf:
        di = pickle.load(inf)

    model = pomegranate.BayesianNetwork.from_dict(di)
    NSTATES = 50
    #Understanding the regular expression is left as an exercise for the reader
    cmd = "ros2 run data_collection data_collection"
    proc = subprocess.Popen(
        rf""" {cmd}""",
    stderr=subprocess.PIPE, stdout=subprocess.DEVNULL, shell=True, encoding='utf-8')

    states = []
    while True:
        line = proc.stderr.readline()
        if not line: break
        line = line.split(",")
        try:
            z = line[64]
        except IndexError as e:
            continue
        states.append(direction(float(z), .05))
        if len(states) == NSTATES:
            predicted = numpy.char.equal(model.predict([states[:NSTATES] + [None]])[-1][-1], "True")
            if predicted:
                print("Door")
            states.pop(0)


if __name__ == "__main__":
    main()
