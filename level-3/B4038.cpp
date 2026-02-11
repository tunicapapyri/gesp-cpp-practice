#include <iostream>
#include <vector>
#include <string>

void solve() {
    int n;
    if (!(std::cin >> n)) return;
    
    std::vector<int> a(n);
    long long totalSum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        totalSum += a[i];
    }
    
    long long leftSum = 0;
    bool found = false;
    
    // We need 1 <= i < n
    // sum(1..i) == sum(i+1..n)
    // leftSum == totalSum - leftSum
    // 2 * leftSum == totalSum
    
    // Optimization: totalSum must be even.
    if (totalSum % 2 != 0) {
        std::cout << "No" << std::endl;
        return;
    }
    
    for (int i = 0; i < n - 1; ++i) {
        leftSum += a[i];
        if (leftSum * 2 == totalSum) {
            found = true;
            break;
        }
    }
    
    if (found) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}

int main() {
    int t;
    if (std::cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
