#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void print(const vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << (i == vec.size() - 1 ? "" : " ");
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    int count0 = 0;
    for(char c : s) if(c == '0') count0++;

    vector<int> ans;
    for(int i = 0; i < n; i++) {
     
        if(i < count0 && s[i] == '1') {
            ans.pb(i + 1);
        } 
      
        else if(i >= count0 && s[i] == '0') {
            ans.pb(i + 1);
        }
    }

    if(ans.empty()) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
        cout << ans.size() << endl;
        print(ans);
    }
}

int main() {
    fast();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}