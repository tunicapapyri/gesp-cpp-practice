#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;
    if (!(std::cin >> n >> k)) return 0;
    
    std::vector<int> a(n);
    int maxVal = -200000; 
    int minVal = 200000;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] > maxVal) maxVal = a[i];
        if (a[i] < minVal) minVal = a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        if (a[i] > k) {
            std::cout << maxVal;
        } else if (a[i] < k) {
            std::cout << minVal;
        } else {
            std::cout << a[i];
        }
        
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}
