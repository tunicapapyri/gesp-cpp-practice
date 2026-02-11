#include <iostream>

int main() {
    int a;
    if (!(std::cin >> a)) return 0;
    int count = 0;
    for (int w = 1; w * w <= a; ++w) {
        if (a % w == 0) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
