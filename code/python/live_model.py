import subprocess
import pickle
import pomegranate
import numpy
import pomdp_py
import pomDP
import ros
import signal


class stateHandler:
    def __init__(self, callback):
        self.val = False
        self.callback = callback
        self.proc = False
        self.problem, self.planner = pomDP.main()

    def start(self):
        self.proc = ros.wall_follow(3600, 0, 3600, 0, ros.RIGHT, 0, 10000000)

    def stop(self):
        if self.proc:
            self.proc.send_signal(signal.SIGINT)
            self.proc = False


    def rotate(self):
        ros.rotate(30,0,1.57,0,10000000)

    def wait(self):
        pass
    def handle(self, door):
        action = pomDP.run_planner(self.problem, self.planner, door)
        if action == "start":
            self.start()
        elif action == "wait":
            self.wait()
        elif action == "stop":
            self.stop()
        else:
            self.rotate()
        return action




    def toggle(self):
        # val has gone from false to true
        if self.val:
            self.handle(self.val)

        self.val = not self.val


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

    bayes_model = pomegranate.BayesianNetwork.from_dict(di)
    NSTATES = 50
    # Understanding the regular expression is left as an exercise for the reader
    cmd = "ros2 run data_collection data_collection"
    proc = subprocess.Popen(
        rf""" {cmd}""",
         stdout=subprocess.PIPE, shell=True, encoding='utf-8')

    states = []
    positives = [0] * 15
    DOOR = stateHandler(callback=lambda: print("Callback"))
    print(DOOR.handle(False))
    while True:
        line = proc.stdout.readline()
        if not line: break
        line = line.split(",")
        try:
            z = line[64]
            ts = line[0].split()[1]
        except IndexError as e:
            continue
        states.append(direction(float(z), .05))
        if len(states) == NSTATES:
            predicted = numpy.char.equal(bayes_model.predict([states[:NSTATES] + [None]])[-1][-1], "True")

            # dumb way of doing this
            if predicted:
                positives.append(1)
                # If we have had a lot of positives recently
            else:
                positives.append(0)
            if sum(positives) / len(positives) > .7:
                DOOR.toggle()
            if sum(positives) / len(positives) < .3:
                DOOR.toggle()

            positives.pop(0)
            states.pop(0)


if __name__ == "__main__":
    main()
