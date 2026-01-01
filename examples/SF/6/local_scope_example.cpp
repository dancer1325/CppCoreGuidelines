#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// NOT globally         -- Reason: bad practice
// using namespace std

void process_user_data() {
    using namespace std;  // ✅ LOCAL SCOPE ONLY - affects only this function
    
    // Inside this function, we can use std names directly
    vector<string> users = {"Alice", "Bob", "Charlie", "Diana"};
    cout << "Processing user data..." << endl;
    
    cout << "Original order:" << endl;
    for (const string& user : users) {
        cout << "- " << user << endl;
    }
    
    sort(users.begin(), users.end());
    
    cout << "Sorted order:" << endl;
    for (const string& user : users) {
        cout << "- " << user << endl;
    }
}

void calculate_statistics() {
    using namespace std;  // ✅ LOCAL SCOPE - independent of other functions
    
    vector<int> scores = {85, 92, 78, 96, 88, 91};
    cout << "\nCalculating statistics..." << endl;
    
    cout << "Scores: ";
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;
    
    sort(scores.begin(), scores.end());
    cout << "Min score: " << scores.front() << endl;
    cout << "Max score: " << scores.back() << endl;
}

void display_report() {
    // NO using namespace here - must use std:: explicitly
    std::cout << "\n=== REPORT SECTION ===" << std::endl;
    std::vector<std::string> sections = {"Users", "Statistics", "Summary"};
    
    for (const std::string& section : sections) {
        std::cout << "Section: " << section << std::endl;
    }
}

int main() {
    // NO using namespace in main - explicit std:: required
    std::cout << "=== LOCAL SCOPE EXAMPLE ===" << std::endl;
    
    process_user_data();    // Uses local 'using namespace std'
    calculate_statistics(); // Uses its own local 'using namespace std'  
    display_report();       // Uses explicit std::
    
    return 0;
}
