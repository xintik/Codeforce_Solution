#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n ;
    vector<int> arr(n);
    map < int , int > mp;
    set < int > st;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        st.insert(arr[i]);
    }
   
   for(auto &it : st)
   {
    cout << it << " ";
   }
   for(auto  &p : st)
   {
    auto k = mp[p] - 1;
    while(k--)
    {
        cout << p << " ";
    }
   }
  cout << "\n";
 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--) {
        solve();
    }
}

