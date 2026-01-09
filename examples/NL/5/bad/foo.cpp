void print_int(int i);
void print_string(const char*);

print_int(1);          // repetitive, manual type matching
print_string("xyzzy"); // repetitive, manual type matching

// 2. verbose & cryptic
void printS(string i);          // print a std::string
void prints(string iString);    // print a C-style string
void printi(int i);    // print an int
