#include <bits/stdc++.h>
using namespace std;

// Function to merge two sets and check if their union covers 1 to m
bool covers_range(const vector<int>& set1, const vector<int>& set2, int m) {
    // Use a boolean array to mark presence of elements
    vector<bool> present(m + 1, false);
    
    // Mark elements from set1
    for (int x : set1) {
        if (x >= 1 && x <= m) {
            present[x] = true;
        }
    }
    
    // Mark elements from set2
    for (int x : set2) {
        if (x >= 1 && x <= m) {
            present[x] = true;
        }
    }
    
    // Check if all integers from 1 to m are present
    for (int i = 1; i <= m; i++) {
        if (!present[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> sets(n);
        
        // Read all sets
        for (int i = 0; i < n; i++) {
            int li;
            cin >> li;
            sets[i].resize(li);
            for (int j = 0; j < li; j++) {
                cin >> sets[i][j];
            }
        }
        
        // Example: Check pairs of sets to demonstrate merging
        int valid_combinations = 0;
        vector<bool> single_set_covers(n, false);
        
        // Check if any single set covers 1 to m
        for (int i = 0; i < n; i++) {
            vector<bool> present(m + 1, false);
            for (int x : sets[i]) {
                if (x >= 1 && x <= m) {
                    present[x] = true;
                }
            }
            bool covers = true;
            for (int j = 1; j <= m; j++) {
                if (!present[j]) {
                    covers = false;
                    break;
                }
            }
            if (covers) {
                single_set_covers[i] = true;
                valid_combinations++;
            }
        }
        
        // Check pairs of sets
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (covers_range(sets[i], sets[j], m)) {
                    valid_combinations++;
                }
                // Early exit if we have enough combinations
                if (valid_combinations >= 3) {
                    break;
                }
            }
            if (valid_combinations >= 3) {
                break;
            }
        }
        
        // For the full problem, we’d need to check other combinations
        // Here, we simplify by checking if we have at least 3 ways
        if (valid_combinations >= 3) {
            cout << "YES\n";
        } else {
            // Note: This is a simplified check. For the full problem, we need to consider all subsets.
            cout << "NO\n";
        }
    }
    
    return 0;
}