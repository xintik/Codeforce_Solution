#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> vec(n);
    map < ll , ll > mp;

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    for (int i = 0; i < n; i++)
    {
        ll before = i;
        ll after = n - i - 1;

        // given point contribution
        ll segment = ((before + 1) * (after + 1) )- 1;
        mp[segment]++;

        // gap contribution
        if (i > 0)
        {
            ll gap =  vec[i] - vec[i - 1] - 1;
           
                segment = before * (after+1);
                mp[segment] += gap;
            
        }
    }

    while(q--)
    {
        ll x;
        cin >> x;
        if(mp.count(x))
        {
            cout << mp[x] << " ";
        }
        else
        {
            cout << "0 "; 
        }

    }

    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
