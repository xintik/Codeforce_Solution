#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   int n , k;
   cin >> n >> k;
   if(k % 2 == 1)
   {
    for(int i = 1; i < n; i++)
    {
        cout << n << " ";
    }
    cout << n-1 << "\n";
   }
   else
   {
    for(int i = 1; i <= n; i++)
    {
        if(i == n-1) cout << n << " ";
        else cout << n-1 << " ";
    }
    cout << endl;

   }
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
