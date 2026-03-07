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
        string str;
    cin >> str;

    long long sum = 0;
    vector < int > vec;
    for(int i = 0; i < str.size() ; i++) {
        ll x =( str[i] -'0');
        sum += x;   // convert char to digit
       if(i == 0 && sum > 1) vec.push_back( x-1);
       else vec.push_back(x);
    }
    sort(vec.begin() , vec.end() , greater<int>());
    ll need = sum - 9;
    int cnt = 0;
    for(auto &it : vec) 
        {
            if(need <= 0) 
            {
                cout << cnt << nl;
                return ;
            }
            need = need - it;
            cnt++;

       }

    cout <<cnt << endl;
}
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}