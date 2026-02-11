#include <iostream>
#include <algorithm>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int max_sum = 0;
    while (n--) {
        long long a;
        std::cin >> a;
        int sum = 0;
        long long temp = a;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        max_sum = std::max(max_sum, sum);
    }
    std::cout << max_sum << std::endl;
    return 0;
}
