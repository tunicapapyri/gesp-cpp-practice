#include <iostream>
#include <vector>

int main() {
    int n, d;
    if (!(std::cin >> n >> d)) return 0;
    
    std::vector<int> savings(n, 0);
    for (int i = 1; i <= d; ++i) {
        int a;
        std::cin >> a;
        if (a >= 0 && a < n) {
            savings[a] += i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        std::cout << savings[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
    
    return 0;
}
