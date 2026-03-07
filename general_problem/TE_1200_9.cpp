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
       map < int , int > mp;
       set < int > st;
       for(int i = 0; i < n; i++)
       {
        cin >> vec[i];
        mp[vec[i]]++;
        st.insert(vec[i]);
       }
     vector < int > v;
     while(v.size()!=n)
     {
        vector < int > temp;
       for(auto &it : st)
       {
        if(mp[it] > 0)
        {
            v.push_back(it);
            mp[it]--;
           
        } 

        if(mp[it] == 0)  temp.push_back(it); 
       }
       for(auto &i : temp) st.erase(i);
     }

     // for(auto &it : v) cout << it << " ";
     //    cout << endl;
     int cnt = 1;
     for(int i = 0; i < n; i++)
     {
      if(i+1 < n)
      {
        if(v[i] >= v[i+1] || v[i+1] - v[i] != 1) cnt++;
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
