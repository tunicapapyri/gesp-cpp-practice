#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int count = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            int c2 = a * a + b * b;
            for (int c = b; c <= n; ++c) {
                if (c * c == c2) {
                    count++;
                    break;
                }
                if (c * c > c2) break;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}
