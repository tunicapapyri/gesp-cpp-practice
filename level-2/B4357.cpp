#include <iostream>
#include <set>

int main() {
    int l, r;
    if (!(std::cin >> l >> r)) return 0;
    
    std::set<int> powerSums;
    for (int x = 0; x <= 14; ++x) {
        for (int y = 0; y <= 14; ++y) {
            int n = (1 << x) + (1 << y);
            powerSums.insert(n);
        }
    }
    
    int count = 0;
    for (int n : powerSums) {
        if (n >= l && n <= r) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
