#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    
    int x;
    std::cin >> x;
    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (x >= prices[i]) {
            x -= prices[i];
            count++;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}
