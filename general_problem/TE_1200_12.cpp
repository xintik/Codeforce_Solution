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
       ll n;
       cin >> n;
       vector < ll > vec1(n) , vec2(n);
       vector < int > vec;
    for(int i = 0; i < n; i++) cin >> vec1[i];
    for(int i = 0; i < n; i++) cin >> vec2[i];
    for(int i = 0; i < n; i++) vec.push_back(vec2[i]-vec1[i]);
        sort(vec.begin() , vec.end() , greater <>());
      ll cnt = 0;
      int l = 0, r = n - 1;
      // for(auto &it : vec) cout << it << " ";
      //   cout << endl;
      while(r > l)
      {
        if(vec[l]+vec[r] >= 0)
        {
            cnt++;
            l++;
            r--;
        }
        else
        {
            r--;
        }
      }
      cout << cnt << endl;
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
