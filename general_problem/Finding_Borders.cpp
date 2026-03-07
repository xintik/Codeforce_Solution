#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	cin >> str;
	vector < int > lps(str.size() , 0);
	int len = 0, i = 1;
	vector < int > ans;
	while(i < str.size())
	{
		if(str[i] == str[len])
		{
			lps[i++] = ++len;
		}
		else
		{
			if(len == 0) i++;
			else len = lps[len-1];
		}
	}

    int k = lps[str.size() - 1];
    while(k > 0)
    {
    	ans.push_back(k);
    	k = lps[k-1];
    }
    sort(ans.begin() , ans.end());
    for(auto &it : ans) cout << it << " ";
    	cout << "\n";
}