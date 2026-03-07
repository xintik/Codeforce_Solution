#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n;
    cin >> n;
    vector < ll > vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
   ll sum = 0;

   for(int i = 1; i < n; i += 2)
   {
    if(vec[i-1] > vec[i]) {
        sum += vec[i-1] - vec[i];
        vec[i-1] = vec[i];
    }
    if( ( i + 1  < n ) && ((vec[i+1] + vec[i-1]) > vec[i]) )
    {
        ll k = (vec[i+1] + vec[i-1]) - vec[i];
        sum += k;
        vec[i+1] -= k;
    }
   }
   cout << sum << "\n";

   
  
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
