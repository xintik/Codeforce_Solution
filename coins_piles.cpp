#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int  test;
   cin >> test;
   while(test--)
   {
    ll a , b;
    cin >> a >> b;
    if(  (a + b)%3 == 0 and (2 * min(a,b) >= max(a,b))  )
     cout <<"YES\n";
    else
    cout <<"NO\n";
}
   
}
