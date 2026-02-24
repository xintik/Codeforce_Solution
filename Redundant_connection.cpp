#include<bits/stdc++.h>
using namespace std;
int N = 1e5 + 5;
vector < int > parent(N);
vector < int > sz(N);
void make(int v)
{
	parent[v] = v;
	sz[v] = 1;
}
int find(int v)
{
	if(v == parent[v]) return v;

	// return root;
	// path compration
	return parent[v] = find(parent[v]);
}
void union_set(int u , int v)
{
	int a = find(u);
	int b = find(v);
	if(a != b) 
	{
		if(sz[a] < sz[b])  // a is always larger then b;
		{
			swap(a , b);
		}

		parent[b] = a;

		sz[a] += sz[b];
	}
	else  // a== b root are same thats mean here is a cycle
	{
      cout << "Cycle Exit \n";
      cout << u << " " << v<< "\n";
      return ;
	}


}
int main()
{
	int n , m;
	cin >> n >> m;
	vector < vector < int > > edges(n);

	for(int i = 0; i < m; i++)
	{
		int u , v;
		cin >> u >> v;
		edges[i].push_back( u );
		edges[i].push_back( v );
	}

	int NN = edges.size();
	for(int i = 1; i <=NN ; i ++)
	{
		make(i);
	}

	for(auto &it : edges)
	{
        int a = it[0];
        int b = it[1];

        union_set(a , b);
	}



}