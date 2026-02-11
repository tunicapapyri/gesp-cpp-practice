#include <iostream>
#include <cmath>

int main() {
    int h, w, x;
    if (!(std::cin >> h >> w >> x)) return 0;
    
    int count = 0;
    for (int r = 1; r <= h; ++r) {
        for (int c = 1; c <= w; ++c) {
            if (sqrt(1.0 * r * r + 1.0 * c * c) <= (double)x + r - c) {
                count++;
            }
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
