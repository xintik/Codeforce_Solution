#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    // Store min and max values for each index
    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++) {
        pairs[i] = {min(a[i], b[i]), max(a[i], b[i])};
    }
    
    // Sort indices by min value to process in non-descending order
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int i, int j) {
        return pairs[i].first < pairs[j].first;
    });
    
    // dp[i][last_a]: ways to assign first i positions, last value in a is last_a
    vector<ll> dp(1001, 0);
    dp[0] = 1; // Base case: empty prefix
    
    // Process each position
    for (int i = 0; i < n; i++) {
        vector<ll> new_dp(1001, 0);
        int pos = idx[i];
        int min_val = pairs[pos].first;
        int max_val = pairs[pos].second;
        
        // For each previous last_a
        for (int last_a = 0; last_a <= 1000; last_a++) {
            if (dp[last_a] == 0) continue;
            
            // Option 1: a[pos] = min_val, b[pos] = max_val
            if (last_a <= min_val) {
                new_dp[min_val] = (new_dp[min_val] + dp[last_a]) % MOD;
            }
            
            // Option 2: a[pos] = max_val, b[pos] = min_val
            if (last_a <= max_val) {
                new_dp[max_val] = (new_dp[max_val] + dp[last_a]) % MOD;
            }
        }
        dp = new_dp;
    }
    
    // Sum all valid endings
    ll ans = 0;
    for (int last_a = 0; last_a <= 1000; last_a++) {
        ans = (ans + dp[last_a]) % MOD;
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}