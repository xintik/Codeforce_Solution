#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n;
	cin >> n;
	vector < ll > vec(n);
	for(ll i = 0; i < n; i++) cin >> vec[i];

	map < ll , ll > mp;
	ll ans = 0;

	for(int i = 0; i < n; i++)
	{
		ll val = vec[i] - i;

		// find a pair such as exit 

		ans += mp[val];

		mp[val]++;
	}

	cout << ans << endl;
	
}
int main()
{
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