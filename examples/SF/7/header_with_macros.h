// header_with_macros.h - Defines macros that conflict with std
#ifndef HEADER_WITH_MACROS_H
#define HEADER_WITH_MACROS_H

// Macros that conflict with std function names
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define count(x) (sizeof(x)/sizeof(x[0]))

#endif
