#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    if (!(std::cin >> n >> m)) return 0;
    
    std::vector<bool> present(n, false);
    for (int i = 0; i < m; ++i) {
        int id;
        std::cin >> id;
        if (id >= 0 && id < n) {
            present[id] = true;
        }
    }
    
    bool allPresent = true;
    bool first = true;
    for (int i = 0; i < n; ++i) {
        if (!present[i]) {
            allPresent = false;
            if (!first) {
                std::cout << " ";
            }
            std::cout << i;
            first = false;
        }
    }
    
    if (allPresent) {
        std::cout << n;
    }
    std::cout << std::endl;
    
    return 0;
}
