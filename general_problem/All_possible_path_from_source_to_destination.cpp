#include<bits/stdc++.h>
using namespace std;
void dfs(int src , int des , vector < vector < int > > &graph , vector < int > &path , vector < vector < int > > &allpath, vector < bool > &visited)
{
	visited[src] = true;
	path.push_back(src);

	if(src == des)
	{
		allpath.push_back(path);
	}
	else
	{
		for(auto &neighbor: graph[src])
		{
			dfs(neighbor , des , graph , path , allpath , visited);
		}
	}
	visited[src] = false;
	path.pop_back();
}
int main()
{
	int node , edge;
	cin >> node >> edge;
	vector < vector < int > > graph(node);
	for(int i = 0; i < edge; i++)
	{
		int u , v;
		cin >> u >> v;
		graph[u].push_back(v);
	}
	vector < bool > visited(node , false);
	vector < int > path;
	vector < vector < int > > allpath;

	dfs(0 , node-1 , graph, path , allpath, visited);

	for(auto &it : allpath)
	{
		for(auto &k : it)
		{
			cout << k << " ";
		}
		cout <<"\n";
	}

}