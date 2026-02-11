#include <iostream>

int main() {
    int h, m, s;
    char c;
    if (!(std::cin >> h >> m >> s >> c)) return 0;
    long long total = 0;
    if (c == 'P') {
        total = (1LL * h + 12) * 3600 + m * 60 + s;
    } else {
        total = 1LL * h * 3600 + m * 60 + s;
    }
    std::cout << total << std::endl;
    return 0;
}
