#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if (a % 2 == 0) even++;
        else odd++;
    }
    std::cout << odd << " " << even << std::endl;
    return 0;
}
