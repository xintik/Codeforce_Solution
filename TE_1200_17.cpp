#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll sum = 0;
        for (ll v : a) sum += v;

        ll prevDay = -1;
        ll ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            ll curDay;
            if (x - sum >= 0)
                curDay = (x - sum) / (i + 1);
            else
                curDay = -1;

            ans += (ll)(i + 1) * (curDay - prevDay);
            prevDay = curDay;
            sum -= a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}
