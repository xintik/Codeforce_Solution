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
//const ll MOD = 1e9 + 7;




void solve() {
  ll n;
  cin >> n;

    vector < ll > vec(n);
    ll mx = -1;
    map < ll , ll > mp;
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mx = max(mx , vec[i]);
        mp[vec[i]]++;
    }
    cout << mp[mx] << nl;
  }
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}