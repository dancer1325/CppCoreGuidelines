// test_b.cpp - Include macros FIRST  
#include "header_with_macros.h"  // Defines macros FIRST
#include "header_with_using.h"   // Brings using namespace std; AFTER

int main() {
    cout << "=== TEST B: macros FIRST, using namespace SECOND ===" << endl;
    
    int a = 5, b = 10;
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << "Testing min: ";
    cout << min(a, b) << endl;  // Which min? macro or std::min?
    
    cout << "Testing max: ";
    cout << max(a, b) << endl;  // Which max? macro or std::max?
    
    cout << "Testing count: ";
    cout << count(arr) << endl; // Which count? macro or std::count?
    
    return 0;
}
