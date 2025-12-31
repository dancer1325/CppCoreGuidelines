#include "rectangle.h"  // FIRST include
#include "rectangle.h"  // SECOND include - NO error -- thanks to -- #pragma once

int main() {
    Rectangle rect = {5, 10};
    int area = calculate_area(rect);        // ✅ works PERFECTLY
    return 0;
}
