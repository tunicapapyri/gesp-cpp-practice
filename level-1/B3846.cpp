#include <iostream>
#include <algorithm>

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int y1, y2;
    if (!(std::cin >> y1 >> y2)) return 0;
    int start = std::min(y1, y2);
    int end = std::max(y1, y2);
    long long sum = 0;
    for (int y = start + 1; y < end; ++y) {
        if (isLeap(y)) {
            sum += y;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
