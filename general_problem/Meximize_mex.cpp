#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    map < int , int > mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
  
 
  
    for(int i = 0 ; i <= n + 1; i++)
    {
       if(mp[i]  == 0)
       {
        cout << i << "\n";
        return ;
       }
       else if(mp[i] > 1)
       {
        
        mp[i + x] += mp[i]-1;
       }
    }

   
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

