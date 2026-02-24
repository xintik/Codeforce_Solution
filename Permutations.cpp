#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    set<int> all_vals;
    
    // Read arrays and collect unique values
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        all_vals.insert(a[i]);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        all_vals.insert(b[i]);
    }
    
    // Compress values to ranks
    vector<int> vals(all_vals.begin(), all_vals.end());
    int m = vals.size();
    map<int, int> rank;
    for (int i = 0; i < m; i++) {
        rank[vals[i]] = i + 1; // Ranks 1 to m
    }
    
    // Convert a and b to ranks
    vector<int> rank_a(n), rank_b(n);
    for (int i = 0; i < n; i++) {
        rank_a[i] = rank[a[i]];
        rank_b[i] = rank[b[i]];
    }
    
    // dp[i][ra][rb]: ways for first i positions, a'_i has rank ra, b'_i has rank rb
    vector<vector<ll>> dp(m + 1, vector<ll>(m + 1, 0));
    dp[0][0] = 1; // Base case: dummy position
    
    for (int i = 0; i < n; i++) {
        // Compute 2D prefix sum
        vector<vector<ll>> pref(m + 1, vector<ll>(m + 1, 0));
        for (int x = 0; x <= m; x++) {
            for (int y = 0; y <= m; y++) {
                pref[x][y] = dp[x][y];
                if (x > 0) pref[x][y] = (pref[x][y] + pref[x - 1][y]) % MOD;
                if (y > 0) pref[x][y] = (pref[x][y] + pref[x][y - 1]) % MOD;
                if (x > 0 && y > 0) pref[x][y] = (pref[x][y] - pref[x - 1][y - 1] + MOD) % MOD;
            }
        }
        
        // New DP state
        vector<vector<ll>> new_dp(m + 1, vector<ll>(m + 1, 0));
        int ra = rank_a[i], rb = rank_b[i];
        int va = a[i], vb = b[i];
        
        // Choice 1: No swap (a'_i = a_i, b'_i = b_i)
        ll ways1 = pref[ra][rb];
        new_dp[ra][rb] = (new_dp[ra][rb] + ways1) % MOD;
        
        // Choice 2: Swap (a'_i = b_i, b'_i = a_i), only if a_i != b_i
        if (va != vb) {
            ll ways2 = pref[rb][ra];
            new_dp[rb][ra] = (new_dp[rb][ra] + ways2) % MOD;
        }
        
        dp = move(new_dp);
    }
    
    // Sum all valid endings
    ll ans = 0;
    for (int x = 0; x <= m; x++) {
        for (int y = 0; y <= m; y++) {
            ans = (ans + dp[x][y]) % MOD;
        }
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