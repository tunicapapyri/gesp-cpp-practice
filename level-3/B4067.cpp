#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string n;
    if (!(std::cin >> n)) return 0;
    
    // Define the 5x5 representations for 0, 1, 2, 3
    std::vector<std::vector<std::string>> digits(4, std::vector<std::string>(5));
    
    // 0
    digits[0][0] = ".....";
    digits[0][1] = ".***.";
    digits[0][2] = ".***.";
    digits[0][3] = ".***.";
    digits[0][4] = ".....";
    
    // 1
    digits[1][0] = "****.";
    digits[1][1] = "****.";
    digits[1][2] = "****.";
    digits[1][3] = "****.";
    digits[1][4] = "****.";
    
    // 2
    digits[2][0] = ".....";
    digits[2][1] = "****.";
    digits[2][2] = ".....";
    digits[2][3] = ".****";
    digits[2][4] = ".....";
    
    // 3
    digits[3][0] = ".....";
    digits[3][1] = ".***.";
    digits[3][2] = ".....";
    digits[3][3] = "****.";
    digits[3][4] = ".....";
    
    // The sample output shows the digits are printed horizontally next to each other.
    // So for each of the 5 rows, we print the corresponding row of each digit in n.
    
    for (int r = 0; r < 5; ++r) {
        for (char c : n) {
            int digit = c - '0';
            std::cout << digits[digit][r];
        }
        std::cout << std::endl;
    }
    
    return 0;
}
