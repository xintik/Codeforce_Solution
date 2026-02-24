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
       ll n , m;
       cin >> n >> m;
       vector < ll > vec(m);
       for(int i = 0; i < m; i++) cin >> vec[i];
        sort(vec.begin() , vec.end());
    priority_queue<ll> pq;

     for(int i = 1; i < m; i++)
     {
        if(vec[i]-vec[i-1] > 1) pq.push(vec[i] - vec[i-1]-1);

     }
     if( (n + vec[0] - vec[m-1] - 1) > 0)
        pq.push((n + vec[0] - vec[m-1] - 1));
    ll cnt = 0;
    ll ans = 0;
    while(!pq.empty())
    {
        ll cost = pq.top() - cnt * 2;

         if(cost > 0) ans += max(1ll , cost-1);

        pq.pop();
        cnt += 2;
    }
    cout << n - ans << endl;
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
