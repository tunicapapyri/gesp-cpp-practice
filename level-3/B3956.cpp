#include <iostream>
#include <string>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::string s;
    std::cin >> s;
    
    long long sum = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            sum += (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            sum += -(int)c;
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
