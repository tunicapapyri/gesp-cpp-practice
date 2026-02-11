#include <iostream>
#include <vector>
#include <algorithm>

bool isMultiple(long long a, long long b) {
    return a % b == 0;
}

void solve() {
    int n;
    if (!(std::cin >> n)) return;
    
    std::vector<long long> a(n);
    long long maxVal = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    
    // The candidate must be the maximum value in the array (or equal to it)
    // because if a_i is a multiple of all a_k, then a_i >= a_k for all k.
    // So we just check if maxVal is divisible by all other numbers.
    
    bool possible = true;
    for (long long val : a) {
        if (!isMultiple(maxVal, val)) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
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
