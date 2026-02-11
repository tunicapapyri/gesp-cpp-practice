#include <iostream>

int main() {
    int n, a, b;
    if (!(std::cin >> n >> a >> b)) return 0;
    std::cout << n / (a + b) << std::endl;
    return 0;
}
