#include <iostream>

int main() {
    int n, k;
    if (!(std::cin >> n >> k)) return 0;
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        int temp = i;
        while (temp > 0) {
            if (temp % 10 == k) {
                count++;
            }
            temp /= 10;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
