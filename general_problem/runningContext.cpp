#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
   ll n , k;
   cin >> n >> k;
   cout << n - (n/k) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te;
    cin >> te;
    while(te--) {
        solve();
    }
}