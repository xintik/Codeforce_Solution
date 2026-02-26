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


ll power(ll a, ll b , ll MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

void solve() {
  ll n;
  cin >> n;

    vector<ll> divisors;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i != n / i)   // avoid duplicate when n is perfect square
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    for (auto d : divisors)
        {
          if(power(d , n , n) == 0)
          {
            cout << d << nl;
            return;
          
          }
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