#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
      
        ll m=n*(n-1)/2;
        vector < ll > vec(m);
        for(ll i=0;i<m;i++) cin>>vec[i];
        sort(vec.begin() , vec.end());
        ll idx = 0;
    for(ll k = n - 1; k >= 1; k--)
    {
    cout << vec[idx] << " ";
    idx += k;
    }
    cout << vec[m - 1] << "\n";

    }
}