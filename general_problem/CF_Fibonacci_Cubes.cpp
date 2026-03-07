#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n , m;
    cin >> n >> m;
    string str = "";
    vector < int > vec(n+1);
    ll area = 0;
     vec[0] = 1;
     vec[1] = 2;
     area += 9;
     for(int i = 2; i <= n; i++)
     {
        vec[i] = vec[i-1] + vec[i-2];
       if(i < n) area += vec[i] * vec[i] * vec[i];
     }
     
    while(m--)
    {
        ll a , b , c;
        cin >> a >> b >> c;
        ll mx = INT_MIN;
        ll mn = INT_MAX;
        mx = max(a , max(b , c));
        mn = min(a , min(b , c));
        ll area_box = a*b*c;
        if( (area_box >= area) && (mx >= vec[n]) && (mn >= vec[n-1]) ) str.push_back('1');
        else str.push_back('0');

    }
    cout <<str << endl;
    

   
  
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
