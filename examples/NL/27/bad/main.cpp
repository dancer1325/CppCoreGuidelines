#include "foo.h"  // First include: defines 'a' and 'foo()'
#include "foo.h"  // Second include: defines 'a' and 'foo()' AGAIN

void main() {};