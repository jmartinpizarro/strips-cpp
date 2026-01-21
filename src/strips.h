// Main include file for the STRIPS implementation algorithm

#define CMAKE_BUILD_TYPE "@CMAKE_BUILD_TYPE@"
#define CMAKE_BUILD_CODE "@CMAKE_BUILD_CODE@"
#define CMAKE_VERSION "@CMAKE_VERSION@"

#ifndef LIBSTRIPS_STRIPS_H
#define LIBSTRIPS_STRIPS_H

// Problem and Solution instances
#include "structs/STRIPS_instance_t.h"
#include "structs/STRIPS_solution_t.h"

// Solvers implementations
#include "algorithms/STRIPS_solver.h" // base solver class, no optimizations - pure STRIPS


#endif // LIBSTRIPS_STRIPS_H
