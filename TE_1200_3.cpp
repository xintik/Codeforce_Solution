#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}


void solve() {
     ll n , x , y;
     cin >> n >> x >> y;
     
     ll cnt_x = n/x;
    ll cnt_y = n/y;
    ll common = n / lcm(x , y);
        cnt_x = cnt_x - common;
        cnt_y = cnt_y - common;
        ll t_x = n - cnt_x;
        ll val_x = (n*(n+1) / 2) - (t_x *(t_x+1) / 2);
        ll val_y = cnt_y *(cnt_y + 1) / 2;
        cout << val_x - val_y << endl;
    
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
