#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    long long totalCandies = 0;
    long long prevGiven = 0;
    
    for (int i = 0; i < n; ++i) {
        long long currentNeed = a[i];
        long long give = currentNeed;
        
        if (i > 0) {
            if (give <= prevGiven) {
                give = prevGiven + 1;
            }
        }
        
        totalCandies += give;
        prevGiven = give;
    }
    
    std::cout << totalCandies << std::endl;
    
    return 0;
}
