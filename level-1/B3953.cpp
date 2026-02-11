#include <iostream>

int main() {
    int a;
    if (!(std::cin >> a)) return 0;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
