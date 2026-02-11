#include <iostream>

int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
    
    long long total_pairs = n * (n + 1) / 2;
    long long k = (n + 1) / 2; // number of odd numbers in [1, n]
    long long odd_pairs = k * (k + 1) / 2;
    
    std::cout << total_pairs - odd_pairs << std::endl;
    return 0;
}
