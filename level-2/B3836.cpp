#include <iostream>

int main() {
    int x, y, z, n, m;
    if (!(std::cin >> x >> y >> z >> n >> m)) return 0;
    
    int count = 0;
    for (int a = 0; a <= m; ++a) {
        for (int b = 0; a + b <= m; ++b) {
            int c = m - a - b;
            if (c % z == 0) {
                if (a * x + b * y + c / z == n) {
                    count++;
                }
            }
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
