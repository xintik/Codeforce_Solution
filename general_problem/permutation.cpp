#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	cin >> str;
	int n = str.size();
	vector < string > vec;
	for(int i = 0 ; i < (1 << n) ; i++)
	{
		string s;
		for(int j = 0; j < n; j++)
		{
            if( (i >> j) & 1) s.push_back(str[j]);
		}
		vec.push_back(s);
	}
	for(auto &it : vec)
	{
		cout << it << " \n";
	}

}