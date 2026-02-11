#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    bool found = false;
    for (int i = 1; i * i * i <= n; ++i) {
        if (i * i * i == n) {
            found = true;
            break;
        }
    }
    if (found) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
    return 0;
}
