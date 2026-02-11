#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;
    
    for (int i = a; i <= b; ++i) {
        if (i < 10 || i > 99) continue; // Problem says two-digit numbers (10 < A < B < 100)
        
        if (isPrime(i)) {
            int tens = i / 10;
            int ones = i % 10;
            int swapped = ones * 10 + tens;
            
            if (isPrime(swapped)) {
                std::cout << i << std::endl;
            }
        }
    }
    
    return 0;
}
