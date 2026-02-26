#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define vi vector < int >
#define vii vector < long long >
#define sp " "
//  int cnt = __builtin_popcount(x);
const ll INF = 2e18;
const int N = 3e5;


void solve() {
       ll n , m;
       cin >> n >> m;
       priority_queue < ll > a , b;
       for(int i = 0; i < n; i++) 
       {
        ll x;
        cin >> x;
        a.push(x);
       }
       for(int i = 0; i < m; i++)
       {
        ll x;
        cin >> x;
        b.push(x);
       }
      bool ans = true;
      while(!a.empty() && !b.empty())
      {
         if(ans) // alice
      {
        ll x = a.top();
        ll y = b.top();
        if(x >= y) b.pop();
        else
        {
            b.pop();
            b.push(y-x);
        }
       
        ans = false;
      }
      else // bob
      {
        ll x = b.top();
        ll y = a.top();
        if(x >= y) a.pop();
        else 
        {
            a.pop();
            a.push(y-x);
        }

        
        ans = true;
      }
      }

      if(!a.empty())
      {
        cout << "Alice\n";
      }
      else
      {
        cout << "Bob\n";
      }
     
}
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}