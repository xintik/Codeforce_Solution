#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	vector < int > vec;
	if(n == 0) 
	{
		cout << "YES\n";
		return;
	}
	for(int i = 0; i < 32; i++)
	{
		//cout << ((n>>i) & 1) ;
		vec.push_back( ((n>>i) & 1));
	}
	while(vec.back() == 0) vec.pop_back();
	int cnt = 0;

	for(int i = 0; i < vec.size() ; i++)
	{
		if(vec[i] == 0) cnt++;
		else break;
	}
	for(int i = 0; i < cnt ; i++) vec.push_back(0);

		// if(vec.size() > 30) 
		// {
		// 	cout << "No\n";
		// 	return;
		// }

		// for(auto &it : vec) cout << it ;
		// 	cout << endl;
		for(int i = 0; i < vec.size() / 2; i++)
		{
			if(vec[i] != vec[vec.size() - i -1]) 
			{
				cout << "NO\n";
				return;
			}
		}

	int k = vec.size();
	
   if(vec.size() % 2)
   {
   	if(vec[(k-1) / 2] == 1)
   	{
   	cout << "NO\n";
   	return;
   	}
  
   }
    cout << "YES\n";
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