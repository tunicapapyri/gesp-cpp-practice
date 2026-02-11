#include <iostream>
#include <algorithm>
#include <iomanip>

int main() {
    double v, g, m, n;
    if (!(std::cin >> v >> g >> m >> n)) return 0;
    double cost1 = 0.5 * v;
    double cost2 = (g < 300) ? m : n;
    std::cout << std::fixed << std::setprecision(1) << std::min(cost1, cost2) << std::endl;
    return 0;
}
