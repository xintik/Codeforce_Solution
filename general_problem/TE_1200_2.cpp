#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
      ll n;
      cin >> n;
      vector < ll > vec(n);
      
      for(ll i = 0; i < n; i++)
      {
            cin >> vec[i] ;
         
            
      }
      ll ans = vec[0];
      for(int i = 1; i < n; i++)
      {
        ans = __gcd(ans , vec[i]) ;
      }
     
        ll k = 1;
        while(true)
        {
            set < ll > st;
            k = k * 2;
            for(auto &it : vec) st.insert(it%k);
            if(st.size() == 2)
            {
                cout << k << endl;
                // for(auto &it : vec) cout << it %k << " ";
                //     cout << endl;
                return;
            } 
        }
     
      

     




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
