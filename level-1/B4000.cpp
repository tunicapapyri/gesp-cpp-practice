#include <iostream>

int main() {
    int h, m, s, k;
    if (!(std::cin >> h >> m >> s >> k)) return 0;
    int total_seconds = h * 3600 + m * 60 + s + k;
    int end_h = total_seconds / 3600;
    int end_m = (total_seconds % 3600) / 60;
    int end_s = total_seconds % 60;
    std::cout << end_h << " " << end_m << " " << end_s << std::endl;
    return 0;
}
