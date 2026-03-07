#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const ll e = 1e9+7;
int main()
{
	ll n;
	cin >> n;
	ll ans = 1;
	for(ll i = 0; i < n; i++)
	{
	 
	  ans = (ans * 2) % e;
	}
	cout << ans << endl;
}