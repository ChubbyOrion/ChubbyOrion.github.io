import subprocess
import pickle
import time

import pomegranate
import numpy



import ros
import signal


class stateHandler:
    def __init__(self, callback):
        self.val = False
        self.callback = callback
        self.proc = False
        self.doors = 0
        self.time = time.time()

    def start(self, direction, tm=3600):
        self.proc = ros.wall_follow(tm, 0, tm, 0, direction, 0, 10000000)

    def stop(self):
        if self.proc:
            self.proc.send_signal(signal.SIGINT)
            self.proc = False

    def rotate(self):
        ros.rotate(30, 0, 1.57, 0, 10000000)

    def wait(self):
        pass

    def handle(self):
        self.doors += 1
        if self.doors == 3:
            self.stop()
            time.sleep(1)
            self.rotate()
            time.sleep(3)
            self.start(ros.RIGHT, int(time.time() - self.time))

    def toggle(self, val):

        # val has gone from false to true
        if val and not self.val :
            print("Setting true")
            self.val = True
            self.handle()
        elif self.val and not val:
            print("Setting False")
            self.val = False


def direction(val, rng, diff = 5):
    abr = abs(rng)
    abv = abs(val)

    if abv < abr:
        return "S"

    direction = "L" if val < 0 else "R"

    very = 0
    for i in range(1, diff):
        if abv < i * abr:
            very += 1

    return f"{'V' * very}{direction}"


def main():

    with open("ModelBayes", 'rb') as inf:
        di = pickle.load(inf)

    bayes_model = pomegranate.BayesianNetwork.from_dict(di)

    with open("ModelAbs", 'rb') as inf:
        di2 = pickle.load(inf)

    print(di2)
    abstract_model = pomegranate.BayesianNetwork.from_json(di2)

    #bayes_model, abstract_model =  abstract_bayesian.build_model(10, 60, .02)
    print(abstract_model)
    NSTATES = 60
    nabstract = 10
    # Understanding the regular expression is left as an exercise for the reader
    cmd = "ros2 run data_collection data_collection"
    cmd = "cat ../door_data/data_left_16.txt"


    proc = subprocess.Popen(
        rf""" {cmd}""",
        stdout=subprocess.PIPE, shell=True, encoding='utf-8')

    states = []
    predStates = []
    positives = [0] * 15
    DOOR = stateHandler(callback=lambda: print("Callback"))

    DOOR.start(ros.LEFT)
    while True:

        line = proc.stdout.readline()
        if not line: break
        line = line.split(",")
        print(line)
        try:
            z = line[64]
        except IndexError as e:
            continue
        states.append(direction(float(z), .02))
        if len(states) == NSTATES:
            bayes_predict = "Apple" if numpy.char.equal(bayes_model.predict([states[:NSTATES] + [None]])[-1][-1],
                                                     "True") else "Orange"

            predStates.append(bayes_predict)
            if len(predStates) >= nabstract:

                temp = abstract_model.predict([predStates[-nabstract:] + [None]])[-1][-1]
                predicted = numpy.char.equal(temp, "True")

                if predicted:
                    positives.append(1)
                    # If we have had a lot of positives recently
                else:
                    positives.append(0)


                if sum(positives) / 15 > .7:
                    DOOR.toggle(True)
                elif sum(positives) / 15 < .3:
                    DOOR.toggle(False)

                positives.pop(0)
            states.pop(0)

    exit()


if __name__ == "__main__":
    main()
