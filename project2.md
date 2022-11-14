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
* Start        &emsp;&emsp;&emsp;&emsp; (Strat moving)
* Stop         &emsp;&emsp;&emsp;&emsp; (Stop moving)
* Rotate       &emsp;&emsp;&emsp; (Rotate 180 degrees)
* Wait         &emsp;&emsp;&emsp;&emsp; (Wait for one of the other instructions)

## Observations:
* Door :)      &emsp;&emsp;&emsp;&emsp; (Robot senses a door)
* Not Door     &emsp;&emsp;&emsp; (Robot does not sense a door)

## Expected Belief: 

State -> Action -> Observation  
Initial -> Start -> Not Door ->   
T1 -> Wait -> Door :) ->  
D1 -> Wait -> Not Door ->  
T2 -> Wait -> Door :) ->  
D2 -> Wait -> Not Door ->  
T3 -> Wait -> Door :) ->  
D3 -> Wait -> Not Door ->  
TR -> Stop -> Not Door ->  
Rotate -> Rotate -> Not Door ->  
Rotate -> Start -> Not Door ->  
T4 -> Wait -> Door :) ->  
D4 -> Wait -> Not Door ->  
T5 -> Wait -> Door :) ->  
D5 -> Wait -> Not Door ->  
T6 -> Wait -> Door :) ->  
D6 -> Wait -> Not Door ->  
T7 -> Wait -> Not Door ->   
Terminate -> Stop -> Not Door

The expected behavior was for the probability to be highest in the state the robot is in, and that each new state would in turn have the current highest probability.
This would create a wave effect in the probability graph. It would start out looking like this:   
- - -
     \
      \
       \
        \
          - - -
Then this "wave" would continually move forward.

What we found instead was like this: ~~~~~~~



