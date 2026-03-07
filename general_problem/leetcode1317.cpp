#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        ll sum = 0;
        sort(vec.begin(), vec.end());
        for (int i = n - 1; i >= 0; i--) {
            sum += vec[i] * m;
            m--;
        }
        cout << sum << "\n";
    }
}
