#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , m ; // n = node m = edge;
	cin >> n >> m;

	vector < vector < int > > graph(n);
	vector < int > degree(n , 0);

   queue< int > qr;

	vector < int > ans;


	for(int i = 0; i < m; i++)
	{
		int u , v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		degree[u]++;
		degree[v]++;
	}

	
	for(int i = 0; i < n; i++)
	{
		if(degree[i] == 1)
		{
			qr.push(i); // add the leave node;
		}
	}

	while(!qr.empty())
	{
		ans.clear(); // clear the previous ans update new lebel
		int size = qr.size();
		for(int i = 0; i < size ; i++)
		{
		int curr = qr.front();
		qr.pop();
		ans.push_back(curr); // add updade level

		for(auto &it : graph[curr]) // travarce the neighbor  
		{
          degree[it]--;
          if(degree[it] == 1) qr.push(it);
		}
		}
		// as bfs , print , visit[true] , visit all neighbor ; 
		// print goes to ans , visit is degree-- and visit all neighbors;
		
	}

	for(auto &it : ans)
	{
		cout << it << " ";
	}
	cout <<"\n";
}