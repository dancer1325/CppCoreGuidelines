// test_a.cpp - Include using header FIRST
#include "header_with_using.h"   // Brings using namespace std; FIRST
#include "header_with_macros.h"  // Defines macros AFTER std names imported

int main() {
    cout << "=== TEST A: using namespace FIRST, macros SECOND ===" << endl;
    
    int a = 5, b = 10;
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << "Testing min: ";
    cout << min(a, b) << endl;  // Which min? std::min or macro?
    
    cout << "Testing max: ";  
    cout << max(a, b) << endl;  // Which max? std::max or macro?
    
    cout << "Testing count: ";
    cout << count(arr) << endl; // Which count? std::count or macro?
    
    return 0;
}
