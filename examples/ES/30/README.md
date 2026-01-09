# Reason:
## Macros are a major source of bugs
* [bad.cpp](bad.cpp)
  * a minor camelcase error -> bug
## do NOT obey the usual scope & type rules
* [scope_type_issues.cpp](scope_type_issues.cpp)
  * check the code
  * [run it](#how-to-run)
## complicate tool building
* [bad.cpp](bad.cpp)

# Note
## use cases
### configuration control
* [use_in_configurationcontrol.cpp](use_in_configurationcontrol.cpp)

## TODO: 

## how to run?
* -- via -- IDE
* -- via -- CL
  * `clang++ -std=c++11 scope_type_issues.cpp -o scope_type_issues`
