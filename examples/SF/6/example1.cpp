// 1. BETTER practice
//      bring ONLY the required ones
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>

// 2. BAD practice
//      bring ALL std's names
using namespace std;

// 3. variables / collide -- with -- std names
int count = 5;        // ERROR: collides with std::count
int distance = 10;    // ERROR: collides with std::distance  
int min = 1;          // ERROR: collides with std::min
int max = 100;        // ERROR: collides with std::max

int main() {
    vector<int> data = {3, 1, 4, 1, 5};
    
    // Try to use our variables
    cout << "Count: " << count << endl;
    cout << "Distance: " << distance << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    
    return 0;
}