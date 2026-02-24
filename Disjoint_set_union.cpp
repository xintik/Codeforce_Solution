#include<bits/stdc++.h>
using namespace std;
int N = 1e5 + 5;
vector < int > parent(N);
vector < int > sz(N);
void make(int v)
{
	parent[v] = v;
}
int find(int v)
{
	if(v == parent[v]) // individual element 
	{
        return v;
	}

	// else find the root of the v;
	// path comprassion 
	return  parent[v] = find(parent[v]);
}

void union_set(int a , int b)
{
	a = find(a); // root of a;
	b = find(b); //find the root of b;
	if(a != b) // if root are not same then union them 
	{
		if(sz[a] < sz[b])
		swap(a , b);
      parent[b] = a;
      sz[a] += sz[b];
	}
}
int main()
{
   int n , m;
   cin >> n >> m;
   for(int i =1 ; i <= n; i++)
   {
   	make(i);
   }
   vector < pair < int , int > > pr;
   for(int i = 1; i <= m; i++)
   {
      int u , v;
      cin >> u >> v;
      pr.push_back({u , v});
   }

   for(auto &it : pr)
   {
   	int a = find(it.first) ;
   	int b = find(it.second);
   	if(a == b)
   	{
   		cout << "Cycle exit\n";
   		cout << it.first << " " << it.second << " \n";
   		break;
   	}
   	else
   		union_set( it.first , it.second);

   }
}