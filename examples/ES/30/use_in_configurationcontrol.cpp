#include <iostream>

#define DEBUG_MODE 1

#if DEBUG_MODE
    #define DBG_PRINT(x) std::cout << "[DEBUG] " << x << std::endl
#endif


int main() {
    // 1. configuration control
    DBG_PRINT("Starting application");

    return 0;
}
