#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
     cin >> n;
     int ans = 0;
    while(n)
    {
           n = n / 5;
           ans += n;

    }
    cout << ans << "\n";
    return 0;
}
