#include "math_utils.h"
#include "math_operations.h"    // MATH_H ALREADY exists → NOT include multiply()

int main() {
    int sum = add(5, 3);        // ✅ works
    int product = multiply(4, 2);    // ❌ ERROR: multiply does NOT work
    return 0;
}
