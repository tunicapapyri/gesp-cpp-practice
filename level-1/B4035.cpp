#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if (a % 9 == 0 && a % 8 != 0) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
