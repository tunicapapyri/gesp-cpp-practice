#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

long long nextNum(long long n) {
    int lastDigit = n % 10;
    long long rem = n / 10;
    int squareDigit = (lastDigit * lastDigit) % 10;
    
    std::string s = std::to_string(rem);
    if (rem == 0 && n < 10) s = ""; // Handling case where n was single digit
    
    // "如果是 0，则数字不保留前导 0" implies standard integer parsing rules apply
    std::string newPrefix = std::to_string(squareDigit);
    std::string resStr = newPrefix + s;
    
    if (resStr == "") return 0;
    return std::stoll(resStr);
}

int main() {
    long long n, m;
    int q;
    if (!(std::cin >> n >> m >> q)) return 0;
    
    if (n == m) {
        // If start equals end, assuming 0 operations is valid or handled by problem context.
        // But usually "output i-th operation result".
        // Let's assume input n != m based on typical BFS problems, or check dist=0.
        // For this specific problem type, usually we just search.
        // If n=m is possible with 0 ops, we output nothing? 
        // Let's stick to standard BFS.
    }
    
    std::queue<long long> queue;
    queue.push(n);
    
    std::map<long long, long long> parent;
    std::map<long long, int> dist;
    
    dist[n] = 0;
    parent[n] = -1;
    
    bool found = false;
    
    while (!queue.empty()) {
        long long curr = queue.front();
        queue.pop();
        
        if (curr == m) {
            found = true;
            break;
        }
        
        if (dist[curr] >= q) continue;
        
        long long next = nextNum(curr);
        // BFS: first time reaching a node is shortest path
        if (dist.find(next) == dist.end()) {
            dist[next] = dist[curr] + 1;
            parent[next] = curr;
            queue.push(next);
        }
    }
    
    if (!found) {
        std::cout << -1 << std::endl;
    } else {
        std::vector<long long> path;
        long long curr = m;
        while (curr != -1) {
            path.push_back(curr);
            curr = parent[curr];
        }
        std::reverse(path.begin(), path.end());
        
        // Output steps (excluding start state)
        for (size_t i = 1; i < path.size(); ++i) {
            std::cout << path[i] << std::endl;
        }
    }
    
    return 0;
}
