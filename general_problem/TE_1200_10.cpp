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
      vector < ll > prefix_sum;
      prefix_sum.push_back(0);
      vector < ll > prefix_mx;
      for(int i = 0; i < n; i++)
      	{ 
      		ll x;
      		cin >> x;
      		prefix_sum.push_back(prefix_sum.back() + x);
      		if(i == 0) prefix_mx.push_back(x);
        else prefix_mx.push_back(max(prefix_mx.back() , x));
      	}
      
      for(int i = 0; i < m; i++)
      {
        ll x;
        cin >> x;
        ll index = upper_bound(prefix_mx.begin() , prefix_mx.end() , x) - prefix_mx.begin();
        cout << prefix_sum[index] << " ";
      }
      cout << endl;
     

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
