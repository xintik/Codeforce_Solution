#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define nl "\n"
void solve()
{
 int n;
 cin >> n;
 map < int , int > mp;
 for(int i = 0; i < 2*n; i++)
 {
 	int x;
 	cin >> x;
 	mp[x]++;
 }
 int diff = 0, odd = 0 , res = 0;
 for(auto &it : mp)
 {
 	if(it.second & 1) 
 	{
 		odd++;
 		res++;
 	}
 	else
 	{
 		if( (it.second / 2)%2 == 0 ) diff = abs(diff - 2);
 		res += 2;
 	}

 }
 diff -= odd;
 if(diff > 0) res-= 2;
 cout << res << nl;
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