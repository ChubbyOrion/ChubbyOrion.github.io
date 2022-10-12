import csv

import matplotlib.pyplot as plt
from pomegranate import *

# Constant values


NSTATES = 15
def direction(val, rng):
    if -rng < val < rng:
        return "S"
    elif val > rng:
        return "R"
    else:
        return "L"


def statesFromFile(iinf, n_states = NSTATES, rng = .1):
    with open("door_data/" + iinf, 'r') as inf:
        "Read last column of CSV into a list of Z's"
        reader = csv.reader(inf)
        row1 = next(reader)
        tstart = float( row1[3])
        tfin =float( row1[4])
        zs = [float(row1[2])]
        zs += [float(row[2]) for row in reader]

    # Create series of NSTATES states from start to finish of data.

    # Plot our points
    plt.title = iinf
    plt.scatter(range(len(zs)), zs)
    plt.figure()
    statlists = [[direction(z, rng=rng) for z in zs[i:i + n_states]] for i in range(len(zs) - n_states)]
    # Very lazily assign passedDoor state, should be changed to be manual per run.

    doors = [stat + ([True] if tstart - n_states < num < tfin - n_states else [False]) for num, stat in enumerate(statlists)]
    return doors

"""Takes in a list of states, number of states to analyze at once, and range to
 determine "straight" vs right/left velocity """
def belief(states, n_states = 15 ) -> BayesianNetwork:

    # Flatten state lists to feed them in
    stats = [item for sublist in states for item in sublist]

    statenames = [f"X{i}" for i in range(n_states)]

    # convert list of lists to tuple of tuples to build structure
    struct = tuple(tuple(sub) for sub in [[n_states] for nstate in range(n_states)] + [[]])

    model = BayesianNetwork.from_structure(stats, struct, state_names=statenames + ["PassedDoor"])

    model.bake()

    return model

model = belief(
    states = [statesFromFile(file, NSTATES) for file in ["1.csv", "2.csv", "3.csv", "4.csv", "5.csv"]])
# Read in some test States
testStates = [statesFromFile(file) for file in ["6.csv", "7.csv"]]

for run in testStates:
    print("BEGINNING SIMULATION OF A NEW RUN\n\n\n")
    for state in run:
        predicted = model.predict([state[:NSTATES] + [None]])[-1][-1]
        print(f"Predicted: {predicted}  Actual: {state[-1]}")

        # buildStates(50)
