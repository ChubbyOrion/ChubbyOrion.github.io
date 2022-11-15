# POMDP

## States:
* Initial      
* T1           &emsp;&emsp;&emsp;&emsp; (Transition 1)
* D1           &emsp;&emsp;&emsp;&emsp; (Door 1)
* T2           &emsp;&emsp;&emsp;&emsp; (Transition 2)
* D2           &emsp;&emsp;&emsp;&emsp; (Door 2)
* T3           &emsp;&emsp;&emsp;&emsp; (Transition 3)
* D3           &emsp;&emsp;&emsp;&emsp; (Door 3)
* TR           &emsp;&emsp;&emsp;&emsp; (Transition to rotate)
* Rotate    
* T4           &emsp;&emsp;&emsp;&emsp; (Transition from rotate)
* D4           &emsp;&emsp;&emsp;&emsp; (Door 1)
* T5           &emsp;&emsp;&emsp;&emsp; (Transition 1)
* D5           &emsp;&emsp;&emsp;&emsp; (Door 2)
* T6           &emsp;&emsp;&emsp;&emsp; (Transition 2)
* D6           &emsp;&emsp;&emsp;&emsp; (Door 3)
* T7           &emsp;&emsp;&emsp;&emsp; (Transition to terminate)
* Terminate

## Actions:
* Start        &emsp;&emsp;&emsp;&emsp; (Start moving)
* Stop         &emsp;&emsp;&emsp;&emsp; (Stop moving)
* Rotate       &emsp;&emsp;&emsp; (Rotate 180 degrees)
* Wait         &emsp;&emsp;&emsp;&emsp; (Wait for one of the other instructions)

## Observations:
* Door :)      &emsp;&emsp;&emsp;&emsp; (Robot senses a door)
* Not Door     &emsp;&emsp;&emsp; (Robot does not sense a door)

## Expected Belief:
We expected a belief with a skew that moved from left to right as we sensed doors. That is it starts with a high probability in the Initial state then moves to T1 when waiting to see a door, then D1 when the first door is seen, then T2 when waiting to see the second door etc. The TR state would be when waiting to finish passing the door and then move to the rotate state to turn around and go back.

## Corrected Expected Belief
When we ran the POMDP with fixed probabilities and fixed data, we corrected our expected belief. Instead of simply a moving skewness with a single peak, we had multiple peaks. This can be seen in the following graphs:

![code/pomdp/State_0.png](code/podmp/State_0.png)
![code/pomdp/State_1.png](code/podmp/State_1.png)
![code/pomdp/State_2.png](code/podmp/State_2.png)
![code/pomdp/State_3.png](code/podmp/State_3.png)
![code/pomdp/State_4.png](code/podmp/State_4.png)
![code/pomdp/State_5.png](code/podmp/State_5.png)
![code/pomdp/State_6.png](code/podmp/State_6.png)
![code/pomdp/State_7.png](code/podmp/State_7.png)
![code/pomdp/State_8.png](code/podmp/State_8.png)
![code/pomdp/State_9.png](code/podmp/State_9.png)
![code/pomdp/State_10.png](code/podmp/State_10.png)
![code/pomdp/State_11.png](code/podmp/State_11.png)
![code/pomdp/State_12.png](code/podmp/State_12.png)
![code/pomdp/State_13.png](code/podmp/State_13.png)
![code/pomdp/State_14.png](code/podmp/State_14.png)
![code/pomdp/State_15.png](code/podmp/State_15.png)
![code/pomdp/State_16.png](code/podmp/State_16.png)
![code/pomdp/State_17.png](code/podmp/State_17.png)
![code/pomdp/State_18.png](code/podmp/State_18.png)
![code/pomdp/State_19.png](code/podmp/State_19.png)
![code/pomdp/State_20.png](code/podmp/State_20.png)
![code/pomdp/State_21.png](code/podmp/State_21.png)

These were generated from the following input:
Action -> Observation  
0: Action: start, Observation: notdoor
1: Action: wait, Observation: notdoor
2: Action: wait, Observation: door
3: Action: wait, Observation: notdoor
4: Action: wait, Observation: notdoor
5: Action: wait, Observation: door
6: Action: wait, Observation: notdoor
7: Action: wait, Observation: notdoor
8: Action: wait, Observation: door
9: Action: wait, Observation: notdoor
10: Action: stop, Observation: notdoor
11: Action: start, Observation: notdoor
12: Action: wait, Observation: door
13: Action: wait, Obseration: notdoor
14: Action: wait, Observation: notdoor
15: Action: wait, Observation: door
16: Action: wait, Observation: notdoor
17: Action: wait, Observation: notdoor
18: Action: wait, Observation: door
19: Action: wait, Observation: notdoor
20: Action: stop, Observation: notdoor
21: Action: stop, Observation: notdoor

As we can see, after we see the first door instead of having one peak on the next transition state, t2, the probability is actually split between t1 and t2 which makes sense in hindsight.

Our next step is to run tests to generate the CPT tables from actual data instead of hard coding numbers.

# Code adaptions

## ROS
The ROS code was updated to start two nodes: one node listens for requests to rotate and the second node listens for requests to perform wall following. A Python API was made that allowed that offered an interface to make a request to perform a rotation by the provided angle or to perform a wall follow for a set amount of time.

## Bayesian
Blake please fill in this part with what you need to adapt the Bayesian network


