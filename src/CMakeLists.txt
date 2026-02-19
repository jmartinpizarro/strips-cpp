# create a custom library that implements a STRIPS algorithm. No optimizations 
# such as abstractions included

add_executable(strips_cli main.cpp)
target_link_libraries(strips_cli PRIVATE strips)
target_compile_features(strips_cli PRIVATE cxx_std_23)

add_library(strips
    strips.h
    algorithms/STRIPS_solver.h
    structs/STRIPS_instance_t.h
    structs/STRIPS_solution_t.h
)

set_target_properties(strips PROPERTIES LINKER_LANGUAGE CXX)