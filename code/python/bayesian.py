import csv
import pprint
import matplotlib.pyplot as plt
import pandas
import pandas as pd
from pomegranate import *
import pickle
import math

# Constant values




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



def dirold(val, rng):
    if -rng < val < rng:
        return "S"
    elif val > rng:
        if val > 2 * rng:
            if val > 3 * rng:
                return "VVR"
            else:
                return "VR"
        else:
            return "R"
    else:
        if val < 2 * (0 - rng):
            if val < 3 * (0 - rng):
                return "VVL"
            else:
                return "VL"
        else:
            return "L"


def statesFromFile(iinf, n_states, rng=.05):
    with open("../door_data/" + iinf, 'r') as inf:
        "Read last column of CSV into a list of Z's"
        reader = csv.reader(inf)
        row1 = next(reader)
        tstart = float(row1[2])
        tfin = float(row1[3])
        zs = [float(row1[1])]
        for row in reader:
            try:
                zs.append(float(row[1]))
            except ValueError as e:
                pass
    # Create series of NSTATES states from start to finish of data.

    # Plot our points

    statlists = [[direction(z, rng=rng) for z in zs[i:i + n_states]] for i in range(len(zs) - n_states)]

    doors = [stat + ([True] if tstart - n_states < num < tfin - n_states else [False]) for num, stat in
             enumerate(statlists)]
    return doors


"""Takes in a list of states, number of states to analyze at once, and range to
 determine "straight" vs right/left velocity """


def belief(states, n_states=50) -> BayesianNetwork:
    # Flatten state lists to feed them in
    stats = [item for sublist in states for item in sublist]

    statenames = [f"X{i}" for i in range(n_states)] + ["PassedDoor"]

    # convert list of lists to tuple of tuples to build structure
    struct = tuple(tuple(sub) for sub in [[n_states] for nstate in range(n_states)] + [[]])
    model = BayesianNetwork.from_structure(stats, struct, state_names=statenames)

    model.bake()

    return model


def trials(nstate, rng):
    model = belief(
        [statesFromFile(file, nstate, rng) for file
         in ["9.csv", "10.csv", "11.csv", "12.csv", "13.csv"]],
        nstate)
    # Read in some test States
    testStates = [statesFromFile(file, nstate, rng) for file in ["14.csv", "15.csv", "16.csv"]]

    fp = 0
    fn = 0
    tp = 0
    tn = 0
    for run in testStates:
        for state in run:
            predicted = numpy.char.equal(model.predict([state[:nstate] + [None]])[-1][-1], "True")
            actual = state[-1]
            if predicted and actual:
                tp += 1
            if predicted and not actual:
                fp += 1
            if not predicted and actual:
                fn += 1
            if not predicted and not actual:
                tn += 1
    try:
        precision = tp / (tp + fp)
    except ZeroDivisionError as e:
        precision = 0
    recall = tp / (tp + fn)
    f1 = 2 * precision * recall / (precision + recall)
    print(f"Pre: {precision} Rec: {recall} f1: {f1}")
    return precision, recall, f1


# Run many trials of different n_states and random numbers generated
def run_trials():
    for i in range(45, 65, 5):
        for j in range(1, 6, 1):
            print(i, j, end=" ")
            trials(i, j / 100)


# Prints the model and writes out the generated tables
def show_model():
    model = belief(
        [statesFromFile(file, 50, .05) for file
         in ["9.csv", "10.csv", "11.csv", "12.csv", "13.csv"]],
        50)
    df = pandas.DataFrame()
    x = model.to_dict()
    pprint.pprint(x)
    states = x['states']
    for state in states:
        try:
            dist = state['distribution']['table']
        except KeyError as e:
            print(e)
            dist = pd.Series(state['distribution']['parameters'])

        name = state['name']
        df[name] = dist
    print(df)

    df.to_csv("Tables.csv")
    with open("model.pkl", 'wb') as outf:
        pickle.dump(x, outf)


if __name__ == "__main__":
    run_trials()
