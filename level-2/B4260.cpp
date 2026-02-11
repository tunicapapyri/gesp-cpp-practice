#include <iostream>

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int getDaysInMonth(int y, int m) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeap(y)) return 29;
    return days[m];
}

int main() {
    int y, m, d, h, k;
    if (!(std::cin >> y >> m >> d >> h >> k)) return 0;
    
    h += k;
    while (h >= 24) {
        h -= 24;
        d++;
        if (d > getDaysInMonth(y, m)) {
            d = 1;
            m++;
            if (m > 12) {
                m = 1;
                y++;
            }
        }
    }
    
    std::cout << y << " " << m << " " << d << " " << h << std::endl;
    return 0;
}
