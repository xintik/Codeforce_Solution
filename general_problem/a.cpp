#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    ll f, k, m;
    cin >> f >> k >> m;

    if(m < k) {
        cout << max(0ll, f - m) << endl;
        return;
    }

    if(k >= f) {
        ll r = f - (m % k);
        cout << max(0ll, r) << endl;
        return;
    }

    ll x = m - k;
    ll y = x / k;
    ll p = x % k;

    ll an = 0;

    if(y % 2 == 0) {
        an = k - p;
    } else {
        an = f - p;
    }

    cout << max(0ll, an) << endl;
}

int main() {
    fast();

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
