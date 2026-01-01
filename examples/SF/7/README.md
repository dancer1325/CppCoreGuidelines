# Reason
## if you use it (== `#include`) -> brings it AUTOMATICALLY / you can NOT use ALTERNATIVES
* [example1.h](example1.h)
  * contains `using namespace std;`
* [example1.cpp](example1.cpp)
  * check the source code
* run example1.cpp
  * check logs
## `#include`d headers order-dependent
* see [header_with_macros.h](header_with_macros.h), [header_with_using.h](header_with_using.h), [order_a.cpp](order_a.cpp) and [order_b.cpp](order_b.cpp)
* see the difference
  * `clang++ -o test_b test_b.cpp`
    * does NOT work
  * `clang++ -o test_a test_a.cpp` compiles & `./test_a` runs


# Notes

## how to run?
* ways
  * -- via -- CL
    * `clang++ -o outputFileName inputFileName.cpp`
  * -- via -- IDE

