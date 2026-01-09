#include <iostream>
#include <string>

#define MAX(a, b) ((a) > (b) ? (a) : (b))  // BAD: NO type checking
#define SQUARE(x) ((x) * (x))              // BAD: MULTIPLE evaluation -- TODO: MULTIPLE evaluation?

void function1() {
    #define LOCAL_MACRO 42  // BAD: "local" macro affects global scope
    std::cout << "In function1, LOCAL_MACRO = " << LOCAL_MACRO << "\n";
}

void function2() {
    // LOCAL_MACRO is STILL visible here! Violates scope rules
    std::cout << "In function2, LOCAL_MACRO = " << LOCAL_MACRO << "\n";
}

int main() {
    // 1. Scope violation
    function1();
    function2();  // LOCAL_MACRO STILL works here
    
    // 2. Type rule violations
    int a = 5, b = 3;
    double x = 2.5, y = 1.8;
    std::string s1 = "hello", s2 = "world";
    
    // Works with DIFFERENT types (no type checking)
    std::cout << "MAX(int): " << MAX(a, b) << "\n";
    std::cout << "MAX(double): " << MAX(x, y) << "\n";
    std::cout << "MAX(string): " << MAX(s1, s2) << "\n";  // Compiles but weird
    
    // 3. Multiple evaluation problem
    int counter = 0;
    auto increment = [&counter]() { return ++counter; };
    
    std::cout << "SQUARE with side effects: " << SQUARE(increment()) << "\n";
    std::cout << "Counter value: " << counter << "\n";  // Counter incremented twice!
    
    // 4. NO namespace respect
    {
        int MAX = 100;  // Variable named MAX
        // std::cout << MAX(a, b);  // Error: MAX is now an int, not the macro
    }
    
    return 0;
}
