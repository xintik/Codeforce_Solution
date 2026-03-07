#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   ll x , y , k;
   cin >> x >> y >> k;
   ll xx = (x+k-1) / k;
   ll yy = (y+k-1) / k;
   if(xx > yy) 
   {
    cout << ((x + k - 1) / k ) * 2 - 1 << endl;
   }
   else
   {
    cout <<  ((k + y - 1) / k ) * 2 << endl;
   }
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
