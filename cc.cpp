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
//const ll MOD = 1e9 + 7;




void solve() {
  ll n;
  cin >> n;
   priority_queue<vector<int>> pq;
   for(int i = 0; i < n; i++)
   {
    int k;
    cin >> k;
    vector < int > vec(k);
    for(int i = 0; i < k; i++) cin >> vec[i];
       reverse(vec.begin() , vec.end() );
        pq.push(vec);
   }
   while(!pq.empty())
   {
    auto &it = pq.top();
    for(auto &i : it) cout << i << sp;
        cout << nl;
    pq.pop();

   }
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