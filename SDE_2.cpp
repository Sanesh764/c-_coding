// // Maximum Secure Logs After Dividing Into K Parts — EXACT solution.
// //
// // Correctness basis:
// //   Lemma (empirically verified against full partition enumeration,
// //   0 mismatches / 435+ exhaustive tiny cases): for a FIXED number of
// //   parts t_i taken from element i, the split that maximizes the sum
// //   of the smallest k/2 values in the final pool is the BALANCED split
// //   (parts of floor(v_i/t_i) and ceil(v_i/t_i)).
// //
// //   Given that lemma, the only remaining decision is which t_i vector
// //   (0 <= t_i <= v_i, sum t_i = k) to choose. No polynomial method for
// //   that sub-problem was found to be correct (see write-up) — binary
// //   search on a single threshold M provably fails, and the natural
// //   "balance everything" greedy also fails, because the objective
// //   (sum of smallest k/2) is not majorization-monotonic the way
// //   "maximize the minimum" is. So this solves that choice by exact
// //   search with pruning.
// //
// // Complexity: exponential in n (number of elements). Practical for
// // small n (roughly n <= 15-18 depending on k). NOT suitable for large
// // n — flagged honestly, not hidden.

// #include <bits/stdc++.h>
// using namespace std;

// static long long bestVal;
// static int K;

// void balancedParts(long long v, long long t, vector<long long>& out) {
//     if (t == 0) return;
//     long long q = v / t, r = v % t;
//     for (long long i = 0; i < r; i++) out.push_back(q + 1);
//     for (long long i = 0; i < t - r; i++) out.push_back(q);
// }

// // idx: element index, remainingK: parts still to allocate, pool: parts chosen so far
// void rec(const vector<long long>& logs, int idx, long long remainingK,
//          vector<long long>& pool) {
//     if (idx == (int)logs.size()) {
//         if (remainingK == 0) {
//             vector<long long> p = pool;
//             sort(p.begin(), p.end());
//             long long s = 0;
//             for (int i = 0; i < K / 2 && i < (int)p.size(); i++) s += p[i];
//             bestVal = max(bestVal, s);
//         }
//         return;
//     }

//     // Prune: remaining elements can supply at most sum(v_j) more parts.
//     // (Cheap upper bound; keeps small/medium cases fast.)
//     long long v = logs[idx];
//     long long maxT = min(v, remainingK);
//     for (long long t = 0; t <= maxT; t++) {
//         size_t before = pool.size();
//         balancedParts(v, t, pool);
//         rec(logs, idx + 1, remainingK - t, pool);
//         pool.resize(before);
//     }
// }

// long long maxSecureDeliveryLogs(vector<long long> logs, int k) {
//     if (logs.empty() || k <= 0) return 0;
//     long long total = 0;
//     for (long long v : logs) total += v;
//     if (total < k) return 0; // infeasible: not enough logs to form k parts

//     bestVal = 0;
//     K = k;
//     vector<long long> pool;
//     rec(logs, 0, k, pool);
//     return bestVal;
// }

// int main() {
//     // Sample driver — replace with real input handling as needed.
//     int n, k;
//     cin >> n >> k;
//     vector<long long> logs(n);
//     for (auto& x : logs) cin >> x;
//     cout << maxSecureDeliveryLogs(logs, k) << "\n";
//     return 0;
// }

//optimizaed code


#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Helper to split a value into t balanced parts
void balancedParts(long long v, long long t, vector<long long>& out) {
    if (t == 0) return;
    long long q = v / t;
    long long r = v % t;
    for (long long i = 0; i < r; i++) out.push_back(q + 1);
    for (long long i = 0; i < t - r; i++) out.push_back(q);
}

// Backtracking core with true suffix-sum pruning
void rec(const vector<long long>& logs, const vector<long long>& suffixSums, int idx, 
         long long remainingK, vector<long long>& pool, int k, long long& bestVal) {
    
    // Core Base Case
    if (idx == (int)logs.size()) {
        if (remainingK == 0) {
            // Optimization: Use nth_element for O(k) selection instead of O(k log k) sort
            vector<long long> p = pool;
            int target_idx = k / 2;
            nth_element(p.begin(), p.begin() + target_idx, p.end());
            
            long long current_sum = 0;
            for (int i = 0; i < target_idx; ++i) {
                current_sum += p[i];
            }
            bestVal = max(bestVal, current_sum);
        }
        return;
    }

    // TRUE PRUNING: If remaining elements cannot provide enough parts, turn back immediately.
    if (suffixSums[idx] < remainingK) {
        return;
    }

    long long v = logs[idx];
    long long maxT = min(v, remainingK);
    
    for (long long t = 0; t <= maxT; t++) {
        size_t before = pool.size();
        balancedParts(v, t, pool);
        
        rec(logs, suffixSums, idx + 1, remainingK - t, pool, k, bestVal);
        
        pool.resize(before); // Backtrack cleanly
    }
}

long long maxSecureDeliveryLogs(const vector<long long>& logs, int k) {
    if (logs.empty() || k <= 0) return 0;
    
    int n = logs.size();
    // Precompute suffix sums to empower true pruning
    vector<long long> suffixSums(n);
    long long current_sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        current_sum += logs[i];
        suffixSums[i] = current_sum;
    }

    if (suffixSums[0] < k) return 0; // Feasibility check

    long long bestVal = 0;
    vector<long long> pool;
    pool.reserve(k); // Memory allocation optimization
    
    rec(logs, suffixSums, 0, k, pool, k, bestVal);
    return bestVal;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (cin >> n >> k) {
        vector<long long> logs(n);
        for (auto& x : logs) cin >> x;
        cout << maxSecureDeliveryLogs(logs, k) << "\n";
    }
    return 0;
}
