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
	string first = store[i-1];
	string second = store[j-1];
	int same = 0 , diff = 0;
	for(int i = 0; i < str.size() ; i++)
	{
		if(first[i] == second[i]) same++;
		mp[first[i]]++;
		mp[second[i]]++;
	}

	for(auto &it : mp)
	{
		if(it.second > 1) diff++;
	}

	cout << same << "A" << diff - same << "B" << endl;
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