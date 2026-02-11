#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    if (!(cin >> h1 >> m1 >> h2 >> m2)) return 0;
    
    int start_total = h1 * 60 + m1;
    int end_total = h2 * 60 + m2;
    
    cout << end_total - start_total << endl;
    
    return 0;
}
