#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll row , col;
	cin >> row >> col;
	ll pivot = max(row , col);
	ll min_value = (pivot-1)*(pivot-1) + 1;
	ll max_value = pivot * pivot;
	
    if(pivot % 2)
    {
    	if(col > row)
    	{
    		cout <<max_value - row   + 1 << "\n";
    	}
    	else
    	{
    		cout << min_value + col -1 << "\n";
    	}
    }
    else
    {
    	if(col > row )
    	{
    		cout << min_value + row - 1 << "\n";
    	}
    	else
    	{
    		cout << max_value - col + 1 << "\n";
    	}
    }
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int test;
	cin >> test;
	while(test--)
	{
		solve();
	}
	return 0;
}