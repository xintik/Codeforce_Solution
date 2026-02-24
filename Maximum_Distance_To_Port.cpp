#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define vi vector < int >
#define vll vector < long long >
#define sp " "
//  int cnt = __builtin_popcount(x);
const ll INF = 2e18;



void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
   int b = 1;  
    bool ans = false;
    for(int i = 1; i < n; i++) {
        if(str[i] != str[i-1]) {
            b++;
        }
        else ans = true;
    }
   if(ans )
   {
    if(str[0] != str[n-1]) cout << b + 1 << endl;
    else cout << b << endl;
   }
   else cout << b << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test ;
   cin >> test;
    while(test--)  solve();

    return 0;
   
}