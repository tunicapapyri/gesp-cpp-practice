#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    while (n--) {
        long long a;
        std::cin >> a;
        int sum = 0;
        long long temp = a;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % 7 == 0) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}
