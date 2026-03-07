#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   ll n;
   cin >> n;
   ll sum = 0;
   ll i = 1;
   bool flag = false;
   while(4 * i <= n)
   {
    n = n - 4*i;
    i++;
    flag = true;
   }
   i--;
   cout << n << " " << i  << endl;
   ll cnt = i * i;
   if(n < 3)
   {
    cout << cnt << endl;
    return ;
   }
   else
   {
    n = n - 3;
    cnt++;
    ll need = (i-1)*2;
    if(need <= n)
    {
        cnt = cnt + n/2;
        cout << cnt << endl;
        return;
    }
    else
    {
        n = n - (i-1)*2;
        cnt = cnt + (i-1);
        if(n < 3)
        {
            cout << cnt << endl;
            return ;
        }
        else
        {
         cnt++;
         n = n - 3;
         cnt = cnt + n/2;
         cout << cnt << endl;
         return;
        }
    }



   }
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   solve();
   return 0;
}