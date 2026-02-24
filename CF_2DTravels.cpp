#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
 ll n , k , a , b;
 cin >> n >> k >> a >> b;
 vector < pair < ll , ll > > pr(n);
 for(int i = 0; i < n; i++)
 {
   
   cin >> pr[i].first >> pr[i].second;
 } 
  ll direct = llabs(pr[a-1].first-pr[b-1].first) + llabs(pr[a-1].second - pr[b-1].second);
  ll start_to_free =  LLONG_MAX/2;
  ll free_to_end =  LLONG_MAX/2;
  for(int i = 0; i < k; i++)
  {
    start_to_free = min(start_to_free , llabs(pr[a-1].first - pr[i].first) +  llabs(pr[a-1].second - pr[i].second));
    free_to_end = min(free_to_end , llabs(pr[b-1].first - pr[i].first) +  llabs(pr[b-1].second - pr[i].second));

  }
  cout << min(direct , start_to_free+free_to_end)<< "\n";  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
