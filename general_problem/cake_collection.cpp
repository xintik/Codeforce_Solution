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
        set < ll > st;
        vector<ll> vec;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin() , vec.end() , greater<ll>());
        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
           sum += vec[i] * max(m-i , 0ll); // what if m is less than n then m - i may be negitive number so use it

        }
        cout << sum << "\n";
    }
}