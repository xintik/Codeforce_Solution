#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n , i , j;
	cin >> n >> i >> j;
	vector < string > store;
	map < int , int > mp;
	string str = to_string(n);
	sort(str.begin() , str.end());
	do
	{
		store.push_back(str);
	}
	while(next_permutation(str.begin() , str.end()));
	
  for(int i = 0; i < store.size() ; i++)
  {
  	cout << store[i] << "\n";
  }
 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}