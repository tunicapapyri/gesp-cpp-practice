#include <iostream>
#include <iomanip>
#include <algorithm>

int main() {
    double x, y, n, p;
    if (!(std::cin >> x >> y >> n >> p)) return 0;
    double opt1 = (p >= x) ? (p - y) : p;
    double opt2 = p * (n / 10.0);
    std::cout << std::fixed << std::setprecision(2) << std::min(opt1, opt2) << std::endl;
    return 0;
}
