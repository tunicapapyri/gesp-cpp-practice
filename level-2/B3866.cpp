#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int count = 0;
    while (n != 495) {
        std::vector<int> digits;
        int temp = n;
        for (int i = 0; i < 3; ++i) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        
        std::sort(digits.begin(), digits.end());
        int min_num = digits[0] * 100 + digits[1] * 10 + digits[2];
        int max_num = digits[2] * 100 + digits[1] * 10 + digits[0];
        
        n = max_num - min_num;
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}
