#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll compute_max(priority_queue<pair<ll,ll>> pqA,
               priority_queue<pair<ll,ll>> pqB,
               priority_queue<pair<ll,ll>> pqC)
{
    vector<pair<ll,ll>> tempB, tempC;
    auto a = pqA.top();

    while(pqB.top().second == a.second) { tempB.push_back(pqB.top()); pqB.pop(); }
    auto b = pqB.top();

    while(pqC.top().second == a.second || pqC.top().second == b.second) { tempC.push_back(pqC.top()); pqC.pop(); }
    auto c = pqC.top();

    return a.first + b.first + c.first;
}

void solve() {
    ll n; cin >> n;

    priority_queue<pair<ll,ll>> pq1, pq2, pq3;
    for(int i=0;i<n;i++){ ll x; cin>>x; pq1.push({x,i}); }
    for(int i=0;i<n;i++){ ll x; cin>>x; pq2.push({x,i}); }
    for(int i=0;i<n;i++){ ll x; cin>>x; pq3.push({x,i}); }

    ll ans = LLONG_MIN;
    ans = max(ans, compute_max(pq1,pq2,pq3));
    ans = max(ans, compute_max(pq1,pq3,pq2));
    ans = max(ans, compute_max(pq2,pq1,pq3));
    ans = max(ans, compute_max(pq2,pq3,pq1));
    ans = max(ans, compute_max(pq3,pq1,pq2));
    ans = max(ans, compute_max(pq3,pq2,pq1));

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}
