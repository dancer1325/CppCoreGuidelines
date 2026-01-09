// Good C++ alternatives that respect scope and type rules

#include <iostream>
#include <string>
#include <algorithm>

// Type-safe template functions instead of macros
template<typename T>
constexpr T max_value(const T& a, const T& b) {
    return (a > b) ? a : b;
}

template<typename T>
constexpr T square_value(const T& x) {
    return x * x;
}

void function1() {
    constexpr int local_constant = 42;  // Properly scoped
    std::cout << "In function1, local_constant = " << local_constant << "\n";
}

void function2() {
    // local_constant is NOT visible here (proper scoping)
    // std::cout << local_constant;  // Error: not in scope
    std::cout << "In function2, local_constant is not accessible\n";
}

int main() {
    // 1. Proper scoping
    function1();
    function2();
    
    // 2. Type safety
    int a = 5, b = 3;
    double x = 2.5, y = 1.8;
    std::string s1 = "hello", s2 = "world";
    
    std::cout << "max_value(int): " << max_value(a, b) << "\n";
    std::cout << "max_value(double): " << max_value(x, y) << "\n";
    std::cout << "max_value(string): " << max_value(s1, s2) << "\n";
    
    // 3. No multiple evaluation
    int counter = 0;
    auto increment = [&counter]() { return ++counter; };
    
    auto temp = increment();
    std::cout << "square_value with side effects: " << square_value(temp) << "\n";
    std::cout << "Counter value: " << counter << "\n";  // Counter incremented once
    
    // 4. Respects namespaces and scope
    {
        int max_value = 100;  // Variable can coexist with template function
        std::cout << "Local variable max_value: " << max_value << "\n";
        std::cout << "Template function: " << ::max_value(a, b) << "\n";
    }
    
    return 0;
}
