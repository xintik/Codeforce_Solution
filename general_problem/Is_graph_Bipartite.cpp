#include<bits/stdc++.h>
using namespace std;
bool bfs(int start , int c , vector < vector < int > > &graph , vector < int >  &color)
{
	queue < int > q;
	q.push(start);

	color[start] = c;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();
        
        for(auto &neighbor : graph[node])
        {
        	if(!color[neighbor]) // not vesited yet
        	{
             color[neighbor] = -color[node];
             q.push(neighbor);
        	}
        	else // already visited chack the node color and neighbor color
        	{
        		if(color[neighbor] == color[node]) // thats mean not bipatite;
        		return false;
        	}
        }
	}
	return true;
}
int main()
{
	int n , m;
	cin >> n >> m;
	vector< vector<int > > graph(n);
	for(int i = 0; i < m; i++)
	{
		int u , v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);

	}
	bool flag;
	vector < int > color(n , 0);
    for(int i = 0; i < n; i++)
    {
       if(color[i] == 0) 
       {
       	flag = bfs(i , 1 , graph , color);
       }
    }

    if(flag)  cout << "Bipatite\n";
    else cout << "NOt bipatite\n";
}