#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void solve() {
   ll n , m;
   cin >> n >> m;
   vector < vector < ll > > vec(n, vector < ll > (m) );
   for(ll i = 0; i < n; i++)
   {
    for(ll j = 0; j < m; j++)
    {
        cin >> vec[i][j];
    }
   }
   ll sum = 0;
     for(ll j = 0; j < m; j++)
     {
    vector < ll > temp;

    for(ll i = 0; i < n; i++)
        {
        temp.push_back(vec[i][j]);
        }

   sort(temp.begin() , temp.end());
   
   ll p_sum = 0;
   for(int i = 0; i < temp.size() ; i++)
    {
     sum += (i*temp[i] - p_sum);
     p_sum += temp[i];
    }
  // cout << sum << endl;
   
     }
  //cout << endl;
    cout << sum << endl;

    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
