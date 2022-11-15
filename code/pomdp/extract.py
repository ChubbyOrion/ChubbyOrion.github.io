import argparse
import pathlib
import matplotlib.pyplot as plt
import numpy as np

def plot_state(state, state_num, action, ob):
    fig, ax = plt.subplots()
    keys = list(state.keys())
    values = list(state.values())
    #print("Keys: {}".format(keys))
    #print("Values: {}".format(values))

    # creating the bar plot
    ax.bar(keys, values, color ='maroon', width = 0.4)
    ax.text(0.5, 0.5, "Action: {}".format(action))
    ax.text(0.5, 0.55, "Observation: {}".format(ob))

    ax.set_xlabel("States")
    ax.set_ylabel("Probability")
    ax.set_title("Probability vs States")
    plt.savefig("State_{}.png".format(state_num), dpi=300)
    plt.close()

def main(data_file):
    init_state = True
    curr_state = dict()
    states = []
    curr_action = ""
    curr_obs = ""
    actions = []
    obs = []
    with open(data_file) as df:
        while True:
            line = df.readline()
            if not line:
                break
            if line.startswith("True state"):
                if init_state:
                    init_state = False
                else:
                    states.append(curr_state)
                    actions.append(curr_action)
                    obs.append(curr_obs)
                    curr_action = ""
                    curr_obs = ""
                    curr_state = dict()
            elif line.startswith("Belief"):
                all_state_info = (line.split('{')[1]).split('}')[0]
                state_info = all_state_info.split(',')
                for fstate in state_info:
                    parts = fstate.split(':')
                    state_name = ((parts[0].strip()).split('(')[1]).split(')')[0]
                    curr_state[state_name] = float(parts[1])
            elif line.startswith("Action"):
                curr_action = (line.split(':')[1]).strip()
            elif "Observation" in line:
                curr_obs = (line.split(':')[1]).strip()

        states.append(curr_state)
        actions.append(curr_action)
        obs.append(curr_obs)

    for i in range(0, len(states)):
        print("{}: Action: {}, Ob: {}".format(i, actions[i], obs[i]))
        plot_state(states[i], i, actions[i], obs[i])

if __name__ == '__main__':
    parser = argparse.ArgumentParser(
                    prog = 'Extractor',
                    description = 'Extracts data and plots it')
    parser.add_argument('data_file', type=pathlib.Path)
    args = parser.parse_args()
    main(args.data_file)
