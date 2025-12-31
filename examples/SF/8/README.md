# `#include` guards | .h files
* [here](includeguard.h)

# Reason
## avoid: guard collisions
* run [main_guard_problem.cpp](main_guard_problem.cpp)
  * "error: use of undeclared identifier 'multiply'"

# Enforcement
## | ALL ".h", use `#include` guards 
* ALL .h / EXCEPT TO [point.h](point.h)

# Notes
## `#pragma once`
* `rectangle.h` & `main_pragma_once.cpp`
* run `main_pragma_once.cpp`
  * NO error
### injects the hosting machine's filesystem semantics | your program
* TODO: 
## TODO: