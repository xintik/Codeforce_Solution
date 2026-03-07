#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, int> mp;


int dfs(long long n, long long k) {
    if(n == k) return 0;      
    if(n < k || n <= 1) return -1;

    if(mp.count(n)) return mp[n];

    long long a = n / 2;       
    long long b = (n + 1) / 2;  

    int res_a = dfs(a, k); 
    int res_b = dfs(b, k);

    int ans;
    if(res_a == -1 && res_b == -1) ans = -1;
    else if(res_a == -1) ans = 1 + res_b;
    else if(res_b == -1) ans = 1 + res_a;
    else ans = 1 + min(res_a, res_b);

    return mp[n] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        mp.clear(); 
        int ans = dfs(n, k);

        cout << ans << "\n";
    }

    return 0;
}
