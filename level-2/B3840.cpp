#include <iostream>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
