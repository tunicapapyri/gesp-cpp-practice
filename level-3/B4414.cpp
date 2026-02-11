#include <iostream>
#include <iomanip>
#include <vector>

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int getDaysInMonth(int y, int m) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeap(y)) return 29;
    return days[m];
}

// 0: Sunday, 1: Monday, ... 6: Saturday
int getDayOfWeek(int y, int m, int d) {
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int c = y / 100;
    y = y % 100;
    int w = (y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1) % 7;
    if (w < 0) w += 7;
    return w; // 0=Sunday, 1=Monday...
}

int main() {
    int m;
    if (!(std::cin >> m)) return 0;
    
    int year = 2025;
    
    std::cout << "MON TUE WED THU FRI SAT SUN" << std::endl;
    
    // We need 1=Monday... 7=Sunday
    // getDayOfWeek returns 0=Sunday, 1=Monday...6=Saturday
    // Map to 0=Mon, 1=Tue... 6=Sun
    // Sunday(0) -> 6
    // Monday(1) -> 0
    // ...
    // (w + 6) % 7
    
    int w = getDayOfWeek(year, m, 1);
    int startDay = (w + 6) % 7; // 0 for Mon, ..., 6 for Sun
    
    int daysInMonth = getDaysInMonth(year, m);
    int currentPos = 0;
    
    // Initial spaces
    for (int i = 0; i < startDay; ++i) {
        std::cout << "    "; // 4 spaces
        currentPos++;
    }
    
    for (int d = 1; d <= daysInMonth; ++d) {
        if (currentPos > 0) std::cout << " ";
        if (d < 10) std::cout << "  " << d;
        else std::cout << " " << d;
        
        currentPos++;
        if (currentPos == 7) {
            std::cout << std::endl;
            currentPos = 0;
        }
    }
    if (currentPos != 0) std::cout << std::endl;
    
    return 0;
}
