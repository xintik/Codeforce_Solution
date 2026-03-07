#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define vi vector < int >
#define vii vector < long long >
#define sp " "

const ll INF = 2e18;
const int N = 3e5;


void solve() {
  ll n ;
  cin >> n ;
  vector < int > a(n) ;
    for(int i = 0; i < n; i++) cin >> a[i];

    

    
     vector < int > d(n+2 , 0);

    for(auto &it : a) d[it]++;


    for(int i = n + 2; i >= 1; i--)
    {
      for(int j = 2*i; j <= n ; j += i)
      {
        d[j] += d[i];
      }
    }
    for(auto &it : d) cout << it <<sp;

      cout << nl;

    // int ax = 0, bx = 0 , cx = 0;

    // for(auto &y : b)
    //   {
    //     if(d[y] == n) ax++;
    //    else if(d[y] == 0) bx++;
    //     else cx++;
    //    }

    //     if(cx%2 + ax > bx) cout << "Alice\n";
    //     else cout << "Bob\n";
  }
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}