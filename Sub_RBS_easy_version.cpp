#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define vi vector < int >
#define vii vector < long long >
#define sp " "
//  int cnt = __builtin_popcount(x);
const ll INF = 2e18;
const int N = 3e5;


void solve() {
          int n;
        string s;
        cin >> n >> s;
        vector<int> nx(n + 1, n + 1);
        vector<int> suf(n + 1, 0);
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '(') nx[i] = i;
            else nx[i] = nx[i + 1];
            if(s[i] == '(') suf[i] += 1;
            suf[i] += suf[i + 1];
        }
        

        int ans = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == ')' and nx[i] <= n){
                int ig = nx[i] - i;
                if(suf[nx[i] + 1] >= ig){
                    ans = max(ans, n - 2 * ig);
                }
            }
        }

       cout << ans << '\n';
    

}
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}