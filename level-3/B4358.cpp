#include <iostream>
#include <vector>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    int totalSetBits = 0;
    for (int i = 0; i < n; ++i) {
        int c;
        std::cin >> c;
        totalSetBits += countSetBits(c);
    }
    
    int parity = (totalSetBits % 2 != 0) ? 1 : 0;
    
    std::cout << totalSetBits << " " << parity << std::endl;
    
    return 0;
}
