#include "example1.h"    // ⚠️ AUTOMATICALLY brings using namespace std ⚠️

// User tries to define their own functions but header already forced std names
bool copy(int src, int dest) {           // ❌ Ambiguous with std::copy
    cout << "Called LOCAL copy(" << src << ", " << dest << ")" << endl;
    return src == dest;
}

int count(int* arr, int size) {          // ❌ Ambiguous with std::count  
    cout << "Called LOCAL count with size: " << size << endl;
    return size * 2;  // Different behavior than std::count
}

int distance(int a, int b) {             // ❌ Ambiguous with std::distance
    cout << "Called LOCAL distance(" << a << ", " << b << ")" << endl;
    return abs(a - b);  // Different from std::distance
}

int main() {
    cout << "=== DEMONSTRATING FORCED using namespace std ===" << endl;
    cout << "Header took away user's control!" << endl << endl;
    
    int data[] = {1, 2, 3, 2, 1};
    
    cout << "Calling ambiguous functions:" << endl;
    
    // These calls use LOCAL functions (not std versions)
    // But user has NO control due to header forcing using namespace std
    copy(5, 10);              
    count(data, 5);          
    distance(100, 120);        
    
    cout << endl << "User CANNOT choose std:: versions explicitly!" << endl;
    cout << "Header already decided the naming strategy." << endl;
    
    return 0;
}