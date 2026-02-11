#include <iostream>

bool isBeautiful(int n) {
    int digit = n % 10;
    while (n > 0) {
        if (n % 10 != digit) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (isBeautiful(i)) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
