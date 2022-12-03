import pomdp_py
from pomdp_py.utils import TreeDebugger
import random
import numpy as np
import sys
import time

states = ['initial', 't1', 'd1', 't2', 'd2', 't3', 'd3', 'tr', 'rotate', 't4', 'd4', 't5', 'd5', 't6', 'd6', 't7', 'terminate']
actions = ['start', 'stop', 'rotate', 'wait']
obvs = ['door:)', 'notdoor']

class State(pomdp_py.State):
    def __init__(self, name):
        if name not in states:
            raise ValueError("Invalid state: %s" % name)
        self.name = name
    def __hash__(self):
        return hash(self.name)
    def __eq__(self, other):
        if isinstance(other, State):
            return self.name == other.name
        return False
    def __str__(self):
        return self.name
    def __repr__(self):
        return "State(%s)" % self.name

class Action(pomdp_py.Action):
    def __init__(self, name):
        if name not in actions:
            raise ValueError("Invalid action: %s" % name)
        self.name = name
    def __hash__(self):
        return hash(self.name)
    def __eq__(self, other):
        if isinstance(other, Action):
            return self.name == other.name
        return False
    def __str__(self):
        return self.name
    def __repr__(self):
        return "Action(%s)" % self.name

class Observation(pomdp_py.Observation):
    def __init__(self, name):
        if name not in obvs:
            raise ValueError("Invalid action: %s" % name)
        self.name = name
    def __hash__(self):
        return hash(self.name)
    def __eq__(self, other):
        if isinstance(other, Observation):
            return self.name == other.name
        return False
    def __str__(self):
        return self.name
    def __repr__(self):
        return "Observation(%s)" % self.name

class ObservationModel(pomdp_py.ObservationModel):
    def __init__(self):
        pass
    def probability(self, observation, next_state, action):
        #print("Observation Probability: {}, {}, {}".format(observation, next_state, action))
        if action.name == "start":
            if next_state.name == "t1" or next_state.name =="t4":
                if observation.name == "door:)":
                    return 0.0
                else:
                    return 1.0
            else:
                if observation.name == "door:)":
                    return 0.0
                else:
                    return 1.0
        elif action.name == "stop":
            if next_state.name == "rotate" or next_state.name == "terminate":
                if observation.name == "door:)":
                    return 0.0
                else:
                    return 1.0
            else:
                if observation.name == "door:)":
                    return 0.0
                else:
                    return 1.0
        elif action.name == "rotate":
            if next_state.name == "rotate":
                if observation.name == "door:)":
                    return 0.0
                else:
                    return 1.0
            else:
                if observation.name == "door:)":
                    return 0.0
                else:
                    return 1.0
        else:
            if next_state.name.startswith('t') and len(next_state.name) == 2:
                if observation.name == "door:)":
                    return 0.1
                else:
                    return 0.9
            elif next_state.name.startswith('d'):
                if observation.name == "door:)":
                    return 0.9
                else:
                    return 0.1
            else:
                if observation.name == "door:)":
                    return 0.1
                else:
                    return 0.9
    def sample(self, next_state, action):
        if next_state.name.startswith('d'):
            #print("Sample Observation door")
            return Observation("door:)")
        else:
            #print("Same Observation NOT door")
            return Observation("notdoor")
    def get_all_observations(self):
        return [Observation(s)
                for s in obvs]

class TransitionModel(pomdp_py.TransitionModel):
    def probability(self, next_state, state, action):
        #print("Transition: {}, {}, {}".format(next_state, state, action))
        if action.name == "start":
            if state.name == "initial":
                if next_state.name == "t1":
                    return 1.0
                else:
                    return 0.0
            elif state.name == "rotate":
                if next_state.name == "t4":
                    return 1.0
                else:
                    return 0.0
            else:
                return 0.0
        elif action.name == "stop":
            if state.name == "tr":
                if next_state.name == "rotate":
                    return 1.0
                else:
                    return 0.0
            elif state.name == "t7":
                if next_state.name == "terminate":
                    return 1.0
                else:
                    return 0.0
            else:
                return 0.0
        elif action.name == "rotate":
            if state.name == "rotate":
                if next_state.name == "rotate":
                    return 1.0
                else:
                    return 0.0
            else:
                return 0.0
        else:
            if len(state.name) == 2 and state.name[0] == 't':
                if next_state.name == state.name:
                    # prob of still transitioning
                    return 0.9
                elif len(next_state.name) == 2 and next_state.name[0] == 'd' and next_state.name[1] == state.name[1]:
                    # prob of advancing from transitioning to door
                    return 0.1
                else:
                    return 0.0
            elif len(state.name) == 2 and state.name[0] == 'd':
                if next_state.name == state.name:
                    # prob of still being in front of a door
                    return 0.0
                elif len(next_state.name) == 2 and next_state.name[0] == 't':
                    if next_state.name == 'tr':
                        if state.name == 'd3':
                            # prob of going from d3 to tr
                            return 1.0
                        else:
                            # prob of waiting from anything other than d3 to tr
                            return 0.0
                    elif next_state.name[1] == str(int(state.name[1]) + 1):
                        # prob of advancing from door to transitioning
                        return 1.0
                    else:
                        return 0.0
                else:
                    return 0.0
            elif state.name == "tr":
                if next_state.name == "rotate":
                    # prob of going from tr to rotate
                    return 0.1
                elif next_state.name == "tr":
                    # prob of staying in tr when in tr
                    return 0.9
                else:
                    return 0.0
            elif state.name == "t7":
                if next_state.name == 'terminate':
                    # prob of going from t7 to terminate
                    return 0.1
                elif next_state.name == 't7':
                    # prob of staying in t7
                    return 0.9
                else:
                    return 0.0
            else:
                return 0.0
    def sample(self, state, action):
        #print("Sample Transition: {}, {}".format(state, action))
        if action.name == "start":
            if state.name == "initial":
                return State("t1")
            elif state.name == "rotate":
                return State("t4")
            else:
                return State("terminate")
        elif action.name == "stop":
            if state.name == "tr":
                return State("rotate")
            elif state.name == "t7":
                return State("terminate")
            else:
                return State("terminate")
        elif action.name == "rotate":
            if state.name == "rotate":
                return State("rotate")
            else:
                return State("terminate")
        else:
            samp = random.random()
            if state.name == "t1":
                if samp > 0.5:
                    return State("d1")
                else:
                    return State("t1")
            elif state.name == "t2":
                if samp > 0.5:
                    return State("d2")
                else:
                    return State("t2")
            elif state.name == "t3":
                if samp > 0.5:
                    return State("d3")
                else:
                    return State("t3")
            elif state.name == "t4":
                if samp > 0.5:
                    return State("d4")
                else:
                    return State("t4")
            elif state.name == "t5":
                if samp > 0.5:
                    return State("d5")
                else:
                    return State("t5")
            elif state.name == "t6":
                if samp > 0.5:
                    return State("d5")
                else:
                    return State("t5")
            elif state.name == "d1":
                if samp > 0.5:
                    return State("t2")
                else:
                    return State("d1")
            elif state.name == "d2":
                if samp > 0.5:
                    return State("t3")
                else:
                    return State("d2")
            elif state.name == "d3":
                if samp > 0.5:
                    return State("tr")
                else:
                    return State("d3")
            elif state.name == "d4":
                if samp > 0.5:
                    return State("t5")
                else:
                    return State("d4")
            elif state.name == "d5":
                if samp > 0.5:
                    return State("t6")
                else:
                    return State("d5")
            elif state.name == "d6":
                if samp > 0.5:
                    return State("t7")
                else:
                    return State("d6")
            elif state.name == "tr":
                if samp > 0.5:
                    return State("rotate")
                else:
                    return State("tr")
            elif state.name == "t7":
                if samp > 0.5:
                    return State("terminate")
                else:
                    return State("t7")
            else:
                return State("terminate")
    def get_all_states(self):
        return [State(s) for s in states]

class PolicyModel(pomdp_py.RolloutPolicy):
    ACTIONS = {Action(s) for s in actions}
    def sample(self, state):
        #print("Policy sample: {}".format(state))
        if state.name == "initial":
            return Action("start")
        elif state.name == "tr" or state.name == "t7":
            return random.sample([Action("wait"), Action("stop")], 1)[0]
        elif state.name == "rotate":
            return random.sample([Action("rotate"), Action("start")], 1)[0]
        else:
            return Action("wait")
    def rollout(self, state, *args):
        #print("Rollout Policy {}".format(state))
        return self.sample(state)

    def get_all_actions(self, state=None, history=None):
        #print("Get all actions Policy")
        return PolicyModel.ACTIONS

class RewardModel(pomdp_py.RewardModel):
    def sample(self, state, action, next_state):
        #print("Reward sample: {}, {}, {}".format(state, action, next_state))
        if state.name == 't1' and next_state.name == "d1" and action.name == 'wait':
            return 1.0
        elif state.name == 't2' and next_state.name == "d2" and action.name == 'wait':
            return 1.0
        elif state.name == 't3' and next_state.name == "d3" and action.name == 'wait':
            return 1.0
        elif state.name == 't4' and next_state.name == "d4" and action.name == 'wait':
            return 1.0
        elif state.name == 't5' and next_state.name == "d5" and action.name == 'wait':
            return 1.0
        elif state.name == 't6' and next_state.name == "d6" and action.name == 'wait':
            return 1.0
        elif state.name == 'd1' and next_state.name == 't2' and action.name == 'wait':
            return 1.0
        elif state.name == 'd2' and next_state.name == 't3' and action.name == 'wait':
            return 1.0
        elif state.name == 'd3' and next_state.name == 'tr' and action.name == 'wait':
            return 1.0
        elif state.name == 'd4' and next_state.name == 't5' and action.name == 'wait':
            return 1.0
        elif state.name == 'd5' and next_state.name == 't6' and action.name == 'wait':
            return 1.0
        elif state.name == 'd6' and next_state.name == 't7' and action.name == 'wait':
            return 1.0
        elif next_state.name == "terminate" and state.name == "t7" and action.name == 'stop':
            return 8.0
        elif state.name == 'rotate' and next_state.name == 't4' and action.name == 'start':
            return 1.0
        elif state.name == 'initial' and next_state.name == 't1' and action.name == 'start':
            return 1.0
        elif state.name == 't7' and next_state.name == 'terminate' and action.name == 'stop':
            return 1.0
        elif state.name == 'tr' and next_state.name == 'rotate' and action.name == 'stop':
            return 1.0
        elif state.name == 'rotate' and next_state.name == 'rotate' and action.name == 'rotate':
            return 0.0
        else:
            return 0.0

class ProjectTwo(pomdp_py.POMDP):
    def __init__(self, init_true_state, init_belief):
        agent = pomdp_py.Agent(init_belief, PolicyModel(),
                               TransitionModel(),
                               ObservationModel(),
                               RewardModel())
        env = pomdp_py.Environment(init_true_state,
                                   TransitionModel(),
                                   RewardModel())
        super().__init__(agent, env, name="Project 2")
    
    @staticmethod
    def create():
        init_true_state = State("initial")
        init_belief = pomdp_py.Histogram({
            State("initial"): 1.0,
            State("t1"): 0.0,
            State("d1"): 0.0,
            State("t2"): 0.0,
            State("d2"): 0.0,
            State("t3"): 0.0,
            State("d3"): 0.0,
            State("d1"): 0.0,
            State("tr"): 0.0,
            State("rotate"): 0.0,
            State("t4"): 0.0,
            State("d4"): 0.0,
            State("t5"): 0.0,
            State("d5"): 0.0,
            State("t6"): 0.0,
            State("d6"): 0.0,
            State("t7"): 0.0,
            State("terminate"): 0.0,
        })
        problem = ProjectTwo(init_true_state, init_belief)
        problem.agent.set_belief(init_belief, prior=True)
        return problem


def run_planner(problem, planner, door, debug_tree=False):
    start_time = time.time()
    
    action = planner.plan(problem.agent)
    if debug_tree:
        from pomdp_py.utils import TreeDebugger
        dd = TreeDebugger(problem.agent.tree)
        import pdb; pdb.set_trace()

    print("True state:", problem.env.state)
    print("Belief:", problem.agent.cur_belief)
    print("Action:", action)

    reward = problem.env.state_transition(action, execute=True)
    print("Reward:", reward)
    
    if door:
        real_observation = Observation("door:)")
    else:
        real_observation = Observation("notdoor")

    print(">> Observation:",  real_observation)
    problem.agent.update_history(action, real_observation)

    planner.update(problem.agent, action, real_observation)

    if isinstance(problem.agent.cur_belief, pomdp_py.Histogram):
        new_belief = pomdp_py.update_histogram_belief(
            problem.agent.cur_belief,
            action, real_observation,
            problem.agent.observation_model,
            problem.agent.transition_model)
        problem.agent.set_belief(new_belief)

    print("--- %s seconds ---" % (time.time() - start_time))
    return action.name

def main():
    problem = ProjectTwo.create()

    vi = pomdp_py.ValueIteration(horizon=1, discount_factor=0.95)
    return problem, vi

if __name__ == '__main__':
    problem, vi = main()
    
    for i in range(0, 2):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))
        
    action = run_planner(problem, vi, True)
    print("Action: {}".format(action))
    
    for i in range(0, 2):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))
        
    action = run_planner(problem, vi, True)
    print("Action: {}".format(action))
    
    for i in range(0, 2):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))
        
    action = run_planner(problem, vi, True)
    print("Action: {}".format(action))
    
    for i in range(0, 3):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))

    action = run_planner(problem, vi, True)
    print("Action: {}".format(action))

    for i in range(0, 2):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))

    action = run_planner(problem, vi, True)
    print("Action: {}".format(action))

    for i in range(0, 2):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))

    action = run_planner(problem, vi, True)
    print("Action: {}".format(action))

    for i in range(0, 3):
        action = run_planner(problem, vi, False)
        print("Action {}: {}".format(i, action))
