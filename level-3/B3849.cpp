#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    int n, r;
    if (!(std::cin >> n >> r)) return 0;
    
    std::string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string result = "";
    
    if (n == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }
    
    while (n > 0) {
        result += chars[n % r];
        n /= r;
    }
    
    std::reverse(result.begin(), result.end());
    std::cout << result << std::endl;
    
    return 0;
}
