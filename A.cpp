#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   
    ll n , m , k;
    cin >> n >> m >> k;
    vector < ll > vec(n);
    set < ll > st;
    vector < int > ans(k);
    for(int i = 0; i < n;i++) cin >> vec[i];
    for(int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    string str;
    cin >> str;
    for(int i = 0; i < n; i++)
    {
      ll temp = vec[i];
      for(int j = 0; j < str.size() ; j++)
      {
        ll flag;
        if(str[j]=='L') flag = -1;
        else flag = 1;

        if(st.count(temp+flag))
        {
            break;
        }
        ans[j]++;

      }
    }

    for(auto &it : ans) cout << it << " ";
        cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
