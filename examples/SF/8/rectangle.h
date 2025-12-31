#pragma once

struct Rectangle {
    int width, height;
};

int calculate_area(const Rectangle& rect) {
    return rect.width * rect.height;
}
