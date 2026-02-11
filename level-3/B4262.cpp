#include <iostream>
#include <string>
#include <map>
#include <algorithm>

std::string toLower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return std::tolower(c); });
    return s;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::map<std::string, int> counts;
    std::string word;
    for (int i = 0; i < n; ++i) {
        std::cin >> word;
        counts[toLower(word)]++;
    }
    
    std::string mostFrequent;
    int maxCount = -1;
    
    for (auto const& [w, count] : counts) {
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = w;
        }
    }
    
    std::cout << mostFrequent << std::endl;
    
    return 0;
}
