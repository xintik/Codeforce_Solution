#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n;
	cin >> n;
	string str;
	cin >> str;
	vector < ll > vec(n);
	for(ll i = 0; i < n; i++) {
		vec[i] = (str[i] - '0');
	}

	vector < ll > prefix_sum(n+1);
	for(ll i = 0; i < n; i++)
	{
		prefix_sum[i+1] = prefix_sum[i] + vec[i];
	}

	map < ll , ll > mp;
	ll ans = 0;

	for(int i = 0; i < n + 1; i++)
	{
		ll val = prefix_sum[i] - i;

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