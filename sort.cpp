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
  ll  n , k;
  cin >> n >> k;
  ll sum = 0;
 
   vector < ll > vec(n) , path;
    for(int i = 0; i < n; i++) cin >> vec[i];
    ll bonus = 0;
    sort(vec.begin() , vec.end());

  ll l = 0 , r = n-1;
  while(r >= l)
  {
   ll pre = sum / k;
   if((sum + vec[r]) / k > pre)
   {
    sum += vec[r];
    bonus += vec[r];
    path.push_back(vec[r]);
    r--;
   }
   else
   {
    sum += vec[l];
    path.push_back(vec[l]);
    l++;
   }
  }
  cout << bonus << endl;
  for(auto &it : path) cout << it << sp;
    cout << nl;
  }
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}