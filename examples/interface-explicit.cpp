#include <cmath>  // for ceil
#include <iostream>

// Global variable - part of the bad design example
bool round_up = true;

// 1. bad design
int customRound(double d)
{
    return (round_up) ? ceil(d) : d;    // ⚠️depends on `round_up` / NOT explict visible reading the interface signature⚠️
}

int main() {
    double value = 7.2;
    
    // Print standard round result
    std::cout << "round(" << value << ") = " << round(value) << std::endl;
    
    // Print customRound result
    std::cout << "customRound(" << value << ") = " << customRound(value) << std::endl;
    
    return 0;
}