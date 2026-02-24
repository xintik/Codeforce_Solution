#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n ;
	cin >> n;
	vector < bool > visited(n + 1, false);
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		visited[x] = true;
	}
	for(int i = 1; i <= n; i++)
	{
		if(visited[i]==false) 
		{
			cout << i << "\n";
			return 0;
		}
	}
}