#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
  ll num;
  cin  >> num;
  vector < ll > vec(num + 1) , poss(2*num + 1 , -1);
  for(ll i = 1; i <=num ; i++)
  {
    cin >> vec[i];
    poss[vec[i]] = i; 
  }
  int cnt = 0;
  for(ll x = 1; x <= num * 2 ; x++)
  {
    if(poss[x] == -1) continue;
    for(ll y = 1; x*y <= 2*num; y++)
    {
        ll i = poss[x];
        ll j = poss[y];
        if(i < j && x * y == i + j ) cnt ++;
    }
  }
  cout << cnt << endl;
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
