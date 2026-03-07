#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        map<pair<ll,ll>, ll> mp;
        ll ans = 0;

        for(int i = 0; i < n; i++) {

            ll modx = a[i] % x;
            ll mody = a[i] % y;

            ll needx = (x - modx) % x;
            ll needy = mody;
           
           
            ans += mp[{needx, needy}];
          
            mp[{modx, mody}]++;
        }
         
        cout << ans << "\n";
    }
}