// 1. LEGACY CODE == BEFORE migration
// This code was written with "using namespace std" everywhere
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// 2. TRANSITION PHASE: Keep using namespace temporarily
// while gradually migrating to explicit std:: usage
using namespace std;

// OLD STYLE: relies on using namespace std, OTHERWISE std's functions are NOT loaded
void legacy_function() {
    vector<string> names = {"Alice", "Bob", "Charlie"};
    cout << "Legacy function output:" << endl;
    
    for (const string& name : names) {
        cout << "- " << name << endl;
    }
    
    sort(names.begin(), names.end());
    cout << "Sorted names:" << endl;
    for (const string& name : names) {
        cout << "- " << name << endl;
    }
}

// TRANSITION: Mix of old and new style
void partially_migrated_function() {
    vector<string> items = {"item1", "item2"};  // OLD style    -- trust in use namespace std --
    
    std::cout << "Partially migrated function:" << std::endl;  // NEW style     -- std::someFunction --
    
    for (const std::string& item : items) {  // NEW style     -- std::someFunction --
        cout << "- " << item << endl;        // OLD style   -- trust in use namespace std --
    }
}

// NEW STYLE: explicit      std:: usage (goal of migration)
void fully_migrated_function() {
    std::vector<std::string> data = {"modern", "code", "style"};
    std::cout << "Fully migrated function:" << std::endl;
    
    for (const std::string& item : data) {
        std::cout << "- " << item << std::endl;
    }
    
    std::sort(data.begin(), data.end());
}

int main() {
    cout << "=== MIGRATION EXAMPLE ===" << endl;
    cout << "This code is in TRANSITION phase" << endl;
    cout << "Gradually removing 'using namespace std'" << endl << endl;
    
    legacy_function();
    cout << endl;
    
    partially_migrated_function();
    cout << endl;
    
    fully_migrated_function();
    
    return 0;
}
