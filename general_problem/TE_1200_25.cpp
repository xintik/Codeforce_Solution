#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n;
  cin >> n;
  map<ll, ll> mp;
  long long res = 0;
  for (ll i = 1; i <=n; i++) {
    ll x;
    cin >> x;
    x -= i;
    
    mp[x]++;

  }
  for(auto &it : mp) res += (it.second * (it.second - 1) / 2) ;
    cout << res << "\n";
}

int main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}