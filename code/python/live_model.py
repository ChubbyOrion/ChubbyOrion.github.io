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
    cmd = "cat ../door_data/data_left_9.txt"
    proc = subprocess.Popen(
        rf""" {cmd} | rg -o "(\[\d+\.\d+\]|angular.*,H)" | rg -o "(\d+\.\d+\]|z,.*,H)"| tr "\n" " " | tr "H" "\n"| sed "s/] z//g"| sed -E "s/.*]//g" """,
    stdout=subprocess.PIPE, shell=True,     encoding='utf-8',)

    states = []
    while True:
        line = proc.stdout.readline()
        if not line: break
        try:
            ts, z = line.split(',')[0:2]
        except ValueError as e:
            continue
        states.append(direction(float(z), .05))
        if len(states) == NSTATES:
            predicted = numpy.char.equal(model.predict([states[:NSTATES] + [None]])[-1][-1], "True")
            if predicted:
                print(f"{ts}: Door")
            states.pop(0)


if __name__ == "__main__":
    main()