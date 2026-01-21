// Contains the STRIPS problem general case definition

// STRIPS
// A STRIPS instance is composed of: an initial state, a goal state and a set of actions.
// For each action, there are preconditions and postconditions (established after the action is done)

// A STRIPS domain representation can be shown as (P, O, I, G)
//      - P is a set of propositional variables - X = player position in the x axis
//      - O is a set of operator, each operator contains (alpha, beta, lambda, gamma)
//          - alpha: which conditions must be true so the operator can be executed
//          - beta: which conditions must be false so the operator can be executed
//          - lambda: which conditions would be true after the execution of the operator
//          - gamma: which conditions would be false after the execution of the operator
//      - I is the initial state
//      - G is the final state
