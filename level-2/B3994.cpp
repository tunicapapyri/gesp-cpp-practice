#include <iostream>

int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
    
    long long perimeter = n * n + 3 * n;
    long long area = n * (n + 1) * (2 * n + 1) / 6;
    
    std::cout << perimeter << std::endl;
    std::cout << area << std::endl;
    return 0;
}
