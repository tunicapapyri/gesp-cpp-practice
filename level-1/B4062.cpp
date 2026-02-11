#include <iostream>
#include <iomanip>

int main() {
    double k;
    if (!(std::cin >> k)) return 0;
    double c = k - 273.15;
    double f = c * 1.8 + 32;
    if (f > 212) {
        std::cout << "Temperature is too high!" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(2) << c << " " << f << std::endl;
    }
    return 0;
}
