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
   int n;
   cin >> n;
   vector < int > vec(n);
   for(int i = 0; i < n; i++) cin >> vec[i];
     n = unique(vec.begin(), vec.end()) - vec.begin();
  int ans = n;
    for(int i = 0; i+2 < n; i++)
    {
        ans -= ((vec[i+1] > vec[i] ) &&(vec[i+2] > vec[i+1]));
        ans -= ((vec[i+1] < vec[i] ) &&(vec[i+2] < vec[i+1]));
    }
   cout << ans << endl;
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
