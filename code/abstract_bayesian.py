from pomegranate import *
import pickle
import bayesian

"""Returns whether the model predicts that the current state is True or False,"""
"""and whether the value is actually True or false"""

train_data = ["9.csv", "10.csv", "11.csv", "12.csv", "13.csv"]

test_data = ["14.csv", "15.csv", "16.csv"]


def probTrue(model, state):
    nstate = len(state) - 1
    return True if numpy.char.equal(model.predict([state[:nstate] + [None]])[-1][-1], "True") else False


def state_slices(states, len_slice):
    return [[state for state in states[i:i + len_slice]]
            for i in range(len(states) - len_slice)]


# Given a bayesian model and list of doorstates, return usable states for our abstract layer.
def usable_states(model, doorstates):
    observed_truth = [(probTrue(model, substate)) for state in doorstates for substate in state]
    actual_truth = [substate[nstates] for state in doorstates for substate in state]

    observed_slices = state_slices(observed_truth, nabstract)
    actual_slices = state_slices(actual_truth, nabstract)

    final_states = [obs + [act[-1]] for obs, act in zip(observed_slices, actual_slices)]
    return final_states


def build_model(nabstract, nstates, rng):
    doorstates = [bayesian.statesFromFile(file, nstates, rng) for file
                  in train_data]

    model = bayesian.belief(doorstates, nstates)

    observed_truth = [(probTrue(model, substate)) for state in doorstates for substate in state]

    actual_truth = [substate[nstates] for state in doorstates for substate in state]

    observed_slices = state_slices(observed_truth, nabstract)
    actual_slices = state_slices(actual_truth, nabstract)

    final_states = [obs + [act[-1]] for obs, act in zip(observed_slices, actual_slices)]

    struct = tuple(tuple(sub) for sub in [[nabstract] for nstate in range(nabstract)] + [[]])

    model2 = BayesianNetwork.from_structure(final_states, struct)

    model2.bake()
    return model, model2

"""
nabstract = 20
nstates = 50
rng = .05
"""

def trial(nabstract, nstates, rng):
    model, model2 = build_model(nabstract, nstates, rng)

    testStates = [bayesian.statesFromFile(file, nstates, rng) for file
                  in train_data + test_data]

    test_obs = state_slices([(probTrue(model, substate)) for state in testStates for substate in state], nabstract)
    test_act = state_slices([substate[nstates] for state in testStates for substate in state], nabstract)

    final_states_test = [obs + [act[-1]] for obs, act in zip(test_obs, test_act)]

    fp = 0
    fn = 0
    tp = 0
    tn = 0
    for state in final_states_test:
        predicted = model2.predict([state[:nabstract] + [None]])[-1][-1]
        prob = model2.predict_proba([state[:nabstract] + [None]])[-1][-1].parameters[0][True]
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
    try:
        f1 = 2 * precision * recall / (precision + recall)
    except ZeroDivisionError as e:
        f1 = 0
    print(f"Pre: {precision} Rec: {recall} f1: {f1}")

    with open("python/ModelBayes", 'wb') as fout:
        pickle.dump(model.to_dict(), fout)
    with open("python/ModelAbs", 'wb') as fout:
        pickle.dump(model2.to_json(), fout)


def many_trials():
    for nabstract in [5]:
        for nstates in range(55, 70, 5):
            for rng in [2]:
                print(nabstract, nstates, rng, end=" ")
                trial(nabstract, nstates, rng / 100)




trial(10, 60, .02)



