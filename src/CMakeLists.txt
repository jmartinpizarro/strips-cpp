# create a custom library that implements a STRIPS algorithm. No optimizations 
# such as abstractions included

add_library(strips
    strips.h
    algorithms/STRIPS_solver.h
    structs/STRIPS_instance_t.h
    structs/STRIPS_solution_t.h
)

set_target_properties(strips PROPERTIES LINKER_LANGUAGE CXX)