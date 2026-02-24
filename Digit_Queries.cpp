#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll power10(int x) {
    ll res = 1;
    while (x--) res *= 10;
    return res;
}


void solve() {
   ll k;
   cin >> k;
   ll d = 1;
   ll count = 9;

    while( k > d * count)
    {
        k = k - d*count;
        count = count * 10;
        d++;
    }
    
  ll index = (k - 1) % d;
  ll start = power10(d-1);
  ll repeating = (k-1)/d;


ll num = start + repeating;

    // number is the ans but in string from
    string str = to_string(num);

    cout << str[index] << "\n";
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