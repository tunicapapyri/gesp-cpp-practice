#include <iostream>

int main() {
    long long a, b, m, n;
    if (!(std::cin >> a >> b >> m >> n)) return 0;
    
    long long total = a + b;
    long long prev2 = a;
    long long prev1 = b;
    bool stopped = false;
    
    if (a >= m) {
        std::cout << a << std::endl;
        return 0;
    }
    if (b >= m) {
        std::cout << a + b << std::endl;
        return 0;
    }
    
    for (int i = 3; i <= n; ++i) {
        long long current = prev1 + prev2;
        total += current;
        if (current >= m) {
            stopped = true;
            break;
        }
        prev2 = prev1;
        prev1 = current;
    }
    
    std::cout << total << std::endl;
    return 0;
}
