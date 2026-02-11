#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::vector<int> a(n);
    bool allZero = true;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] != 0) allZero = false;
    }
    
    int ops = 0;
    while (!allZero) {
        ops++;
        
        int maxVal = -1;
        int maxIdx = -1;
        
        // Find max value and its largest index
        for (int i = 0; i < n; ++i) {
            if (a[i] >= maxVal) {
                maxVal = a[i];
                maxIdx = i;
            }
        }
        
        int minNonZero = 200; // Since max a_i is 100
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0 && a[i] < minNonZero) {
                minNonZero = a[i];
            }
        }
        
        a[maxIdx] -= minNonZero;
        
        allZero = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                allZero = false;
                break;
            }
        }
    }
    
    std::cout << ops << std::endl;
    
    return 0;
}
