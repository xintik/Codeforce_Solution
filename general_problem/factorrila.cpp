#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD = 1e9+7;

void solve(ll n)
{
   
    ll ans = 1;
    for(ll i = 1; i <= n; i++)
    {
        ans = (ans * i)  ;  // apply modulo at each step
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
    		solve(i);
    }
   
    
    
    return 0;
}
