#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::vector<std::vector<int>> grid(n, std::vector<int>(n, 0));
    
    int row = 0;
    int col = n / 2;
    grid[row][col] = 1;
    
    for (int num = 2; num <= n * n; ++num) {
        int next_r = (row - 1 + n) % n;
        int next_c = (col + 1) % n;
        
        if (grid[next_r][next_c] == 0) {
            row = next_r;
            col = next_c;
        } else {
            row = (row + 1) % n;
        }
        
        grid[row][col] = num;
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << grid[i][j] << (j == n - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }
    
    return 0;
}
