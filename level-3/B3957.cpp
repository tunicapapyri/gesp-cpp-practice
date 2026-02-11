#include <iostream>
#include <vector>
#include <cmath>

bool isPerfectSquare(long long x) {
    if (x < 0) return false;
    long long root = round(sqrt(x));
    return root * root == x;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (isPerfectSquare(a[i] + a[j])) {
                count++;
            }
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}
