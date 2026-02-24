#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll mod = 1e9+7;
    ll n , k;
    cin >> n >> k;
    ll ans = 1;
    n = n % mod;

    while(k )
    {
        if(k%2 == 1) ans = (ans * n) % mod;
        n = (n * n) % mod;
        k = k / 2;

    }
    cout << ans << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
