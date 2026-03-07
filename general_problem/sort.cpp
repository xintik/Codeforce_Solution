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
  ll n;
  cin >> n;
  string str;
  cin >> str;
  ll open = 0 , close = 0;
  ll  zero_component = 0;
  for(int i = 0; i < n; i++)
  {
    if(str[i] == '(') open++;
    else close++;
   
  }

 ll mx_len = min(open , close) * 2;
 if(mx_len == n) 
  {
    cout << n-2 << nl;
    return;
  }

 if(mx_len <= 0) cout << "-1\n";
 else cout << mx_len << nl;
  }
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}