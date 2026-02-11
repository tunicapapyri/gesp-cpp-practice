#include <iostream>
#include <string>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (char c : alphabet) {
        int originalPos = c - 'A';
        int newPos = (originalPos + n) % 26;
        std::cout << (char)('A' + newPos);
    }
    std::cout << std::endl;
    
    return 0;
}
