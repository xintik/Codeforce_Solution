#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int x , y , k;
   cin >> x >> y >> k;
   if(x > y) 
   {
    cout << ((x + y - 1) / y ) * 2 - 1 << endl;
   }
   else
   {
    cout <<  ((x + y - 1) / y ) * 2 << endl;
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
