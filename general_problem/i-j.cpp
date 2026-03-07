#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
 int n ;
 cin >> n;
 vector < int > b(n+1);
 vector < int > a(n+1);
 for(int i = 0; i <= n; i++) b[i] = i;
  sum = 0;
  for(int i = 1; i <= n; i++)  
  {
    a[i] = (a[i-1] ^ b[i]);

  }
  for(auto &it : a) cout << it << sp;
    cout << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
      solve();
    }

    return 0;
}