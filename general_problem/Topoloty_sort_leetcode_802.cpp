#include<bits/stdc++.h>
using namespace std;
int main()
{
	int node , edge;
	cin >> node >> edge;
	vector < vector < int > > graph(node);
	for(int i = 0; i < edge; i++)
		{
			int src , des;
			cin >> src >> des;
			graph[src].push_back(des);
		}

  	vector < vector < int > > RevGraph(node);
  	vector < int > inorder(node , 0);
  	vector < bool > visited(node , false);
  	for(int i = 0; i < node; i++)
  	{
  		for(auto &neighbor : graph[i]) // source i destination neighbor;
  		{
  			RevGraph[neighbor].push_back(i) ; // source is neighbor destination is i;
  			inorder[i]++; // how many extarnal node inject at i node;
  		}
  	}
  	queue < int > q;
  for(int i = 0; i < node; i++)
  {
  	if(inorder[i] == 0)
  	{
  		q.push(i);// terminal node;
  	}
  }

  while(!q.empty())
  {
  	int nod = q.front();
  	q.pop();
  	visited[nod] = true;
  	for(auto &neighbor : RevGraph[nod])
  	{
  		inorder[neighbor]--; //disconneted source to destination
  		if(inorder[neighbor] == 0) q.push(neighbor); // safe node
  		// after disconnection if neighber also terminal than add it;

  	}
  }

  vector < int > ans;
  for(int i = 0; i < node ; i++)
  {
  	if(visited[i]) 
  		{
  			cout << i << " ";
  			ans.push_back(i);
  		}
  }



}