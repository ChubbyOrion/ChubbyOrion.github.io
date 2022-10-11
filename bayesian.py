import itertools

import matplotlib.pyplot as plt
import networkx
from pomegranate import *
import pomegranate
import pandas as pd
from sys import argv
import functools
import matplotlib
import pygraphviz
from numpy import nan
# iinf = argv[1]
iinf = "door_data/z.csv"

NSTATES = 30


def buildStateNodes() -> [Node]:
    global NSTATES
    nods = []
    dists = []
    for i in range(NSTATES):
        distribution = DiscreteDistribution({"L": nan, "R": nan, "S": nan})
        dists.append(distribution)
        nod = Node(distribution, name=f"X{i}")
        nods.append(nod)
    return nods, dists


def direction(val, range):
    if -range < val < range:
        return "S"
    elif val > range:
        return "R"
    else:
        return "L"


def statesFromFile():
    with open(iinf, 'r') as inf:
        zs = [float(line.rstrip()) for line in inf]
    # Create series of NSTATES states from start to finish of data.

    return [[direction(z, range=.02) for z in zs[i:i + NSTATES]] for i in range(len(zs) - NSTATES)]



stats = statesFromFile()

stats = [stat + ([False] if num < 230 else [True]) for num, stat in enumerate(stats)]

statnames = [f"X{i}" for i in range(NSTATES)]


struct = tuple(tuple(sub) for sub in [[NSTATES] for nstate in range(NSTATES) ] + [[]] )


print(struct)
model = BayesianNetwork.from_structure(stats, struct, state_names=statnames + ["PassedDoor"])

print(model.to_json())

model.plot()
matplotlib.pyplot.show()

# buildStates(50)
