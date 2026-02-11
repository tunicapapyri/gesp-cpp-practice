#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Optimize I/O operations
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int day = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= day) {
            day++;
        }
    }

    std::cout << day - 1 << std::endl;

    return 0;
}
