#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1000000;
int spf[N + 1];

ll msbPos(ll n) {
    ll pos = -1;
    while (n > 0) {
        pos++;
        n >>= 1;
    }
    return pos;
}


void solve()
{
   ll n;
   cin >> n;
   vector < ll > vec(n);
   for(int i = 0; i < n; i++) cin >>vec[i];
    map < ll , ll > mp;
    for(int i = 0; i < n; i++)
    {
        ll p = msbPos(vec[i]);
        mp[p]++;
    }
    ll sum = 0;
    for(auto &it : mp)
    {
       // cout << it.first << " " << it.second << endl;
        if(it.second > 1)
        {
           ll k = it.second;
            sum += (k * (k-1))/2;
        }
    }
    cout << sum << "\n";

   

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
