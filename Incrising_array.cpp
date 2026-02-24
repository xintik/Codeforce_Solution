#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n;
	vector < ll > vec;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}
	ll sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(vec[i-1] > vec[i] )
		{
			sum = sum + (vec[i-1] - vec[i]);
			vec[i] = vec[i-1];
		}
	}
	cout << sum << "\n";
}