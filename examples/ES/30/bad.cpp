// NOT recommended
#define Case break; case
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DEBUG_PRINT(x) std::cout << #x << " = " << x << std::endl   // 3. NOT POSSIBLE to debug here

#include <iostream>

int main() {
    int x = 2;

    // 1. EASY to get typos
    // 1.1 well used
    std::cout << "1.1 well used\n";
    switch (x) {
        case 1:
            std::cout << "Case 1\n";
            Case 2:  // replace -- to --        break; case 2:
            std::cout << "Case 2\n";
            Case 3: // replace -- to --        break; case 3:
            std::cout << "Case 3\n";
            break;
        default:
            std::cout << "Default\n";
    }

    // 1.2 bad used -- due to -- typo
    std::cout << "1.2 bad used -- due to -- typo\n";
    switch (x) {
        case 1:
            std::cout << "Case 1\n";
            case 2:  // NOT expand - accidental fall-through
            std::cout << "Case 2\n";
            case 3:  // Fall-through continues
            std::cout << "Case 3\n";
            break;
        default:
            std::cout << "Default\n";
    }

    // 2. reading directly the code WITHOUT taking in account the macro is replaced
    //      2.1 if you read the code -> you would expect MAX function is invoked
    //      2.2 if you take in account the macro -> != function, you need to replace
    MAX(++x, 10);

    // // 3. NOT POSSIBLE to debug here
    int value = 42;
    DEBUG_PRINT(value);

    return 0;
}
