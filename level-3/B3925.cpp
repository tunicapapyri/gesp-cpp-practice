#include <iostream>

bool isValid(long long totalFish, int n, int i_val) {
    for (int k = 0; k < n; ++k) {
        if ((totalFish - i_val) % n != 0) return false;
        long long share = (totalFish - i_val) / n;
        if (share <= 0) return false;
        totalFish -= (share + i_val);
    }
    return totalFish > 0;
}

int main() {
    int n, i_val;
    if (!(std::cin >> n >> i_val)) return 0;
    
    // We are looking for the minimum initial fish count.
    // Let's iterate on the number of fish remaining at the end.
    // Or we can work backwards?
    // Working backwards: 
    // Let x_k be the fish before k-th cat.
    // Let x_{k+1} be the fish after k-th cat.
    // x_k = x_{k+1} * n / (n-1) + i_val
    // But x_k must be an integer and (x_k - i_val) must be divisible by n.
    // This looks like it could grow fast.
    
    // Since n is small (< 10), we can probably iterate.
    // Let's try iterating on the number of fish remaining at the end?
    // Or just iterate from a reasonable starting point.
    // The problem asks for "minimum", so we can start checking from 1 upwards?
    // But brute force might be too slow if the answer is large.
    // Sample 2 gives 25.
    
    // Let's try iterating on the share the last cat takes.
    // The last cat (N-th) sees fish X_N.
    // X_N = N * share_N + i_val.
    // Remaining after N-th cat is X_{N+1} = (N-1) * share_N.
    
    // Let's assume the remaining fish at the very end is `rem`.
    // Then we reconstruct backwards N times.
    // x_{current} = x_{after} * n / (n-1) + something?
    // No, relation is: x_{before} - i = n * share
    // x_{after} = x_{before} - share - i = n*share + i - share - i = (n-1)*share
    // So share = x_{after} / (n-1).
    // And x_{before} = n * (x_{after} / (n-1)) + i.
    
    // So valid condition: x_{after} must be divisible by (n-1).
    // Let's iterate `share` for the last cat.
    
    long long share = 1;
    while (true) {
        long long currentFish = share * (n - 1); // fish remaining after last cat
        bool possible = true;
        
        // We need to do this N times to reach the start
        // Step N (last cat):
        // fish before N-th cat = N * share + i
        // currentFish was derived from (N-1)*share, so this matches our formula.
        // Let's strictly follow the backward steps.
        
        long long fish = currentFish;
        for (int k = 0; k < n; ++k) {
            // fish is what remains after a cat took its share.
            // We need to find `before` such that:
            // before = n * (before - i) / n + i  -- wait
            // before - i = n * S
            // after = (n-1) * S
            // So S = after / (n-1).
            // before = n * S + i
            
            if (fish % (n - 1) != 0) {
                possible = false;
                break;
            }
            long long s = fish / (n - 1);
            fish = n * s + i_val;
        }
        
        if (possible) {
            std::cout << fish << std::endl;
            break;
        }
        
        share++;
    }
    
    return 0;
}
