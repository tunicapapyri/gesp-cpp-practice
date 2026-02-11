#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int m, n;
    if (!(std::cin >> m >> n)) return 0;
    
    std::map<int, int> minPrice;
    
    for (int i = 0; i < n; ++i) {
        int k, p;
        std::cin >> k >> p;
        if (minPrice.find(k) == minPrice.end()) {
            minPrice[k] = p;
        } else {
            if (p < minPrice[k]) {
                minPrice[k] = p;
            }
        }
    }
    
    long long totalPrice = 0;
    for (int i = 1; i <= m; ++i) {
        totalPrice += minPrice[i];
    }
    
    std::cout << totalPrice << std::endl;
    
    return 0;
}
