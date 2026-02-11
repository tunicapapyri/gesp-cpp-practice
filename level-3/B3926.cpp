#include <iostream>
#include <string>
#include <map>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::map<std::string, long long> unitToVal;
    unitToVal["km"] = 1000000;
    unitToVal["m"] = 1000;
    unitToVal["mm"] = 1;
    unitToVal["kg"] = 1000000;
    unitToVal["g"] = 1000;
    unitToVal["mg"] = 1;
    
    for (int i = 0; i < n; ++i) {
        long long x;
        std::string u1, eq, q, u2;
        std::cin >> x >> u1 >> eq >> q >> u2;
        
        long long ratio = unitToVal[u1] / unitToVal[u2];
        long long ans = x * ratio;
        
        std::cout << x << " " << u1 << " = " << ans << " " << u2 << std::endl;
    }
    
    return 0;
}
