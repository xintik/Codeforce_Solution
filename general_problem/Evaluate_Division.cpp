#include<bits/stdc++.h>
using namespace std;

double dfs(string curr , string  target , unordered_map < string , unordered_map< string , double > > &graph , unordered_set<string> &visited)
{
	if(graph.find(curr ) == graph.end() || graph.find(target) == graph.end()) return -1.0;

	if(curr == target) return 1.0;

	visited.insert(curr);

	for(auto &neighbor : graph[curr])
	{
		string next = neighbor.first;
		double wt = neighbor.second; // weight
		if(!visited.count(next)) // not found
		{
           double res = dfs(next , target , graph , visited);

           if(res != -1.0) return res * wt; // find the path return result* wt;
		}
	}

	return -1.0;
}
vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries)
 	{
        unordered_map < string , unordered_map < string , double > > graph;
        
        // step 1 create the graph;
        for(int i = 0; i < equations.size() ; i++)
        {
        	string uu = equations[i][0];
        	string vv = equations[i][1];
        	double weight = values[i];

        	graph[uu][vv] = weight;
        	graph[vv][uu] = 1 / weight ;

        }
        // step 2 travers using dfs 
        // if find the source to destination  path then return multiple of weitht 
        // if not find the path then return -1;

        vector < double > ans;

        for(auto &it : queries)
        {
        	string start = it[0];
        	string end = it[1];
        	unordered_set < string > visited;
        	ans.push_back(dfs(start , end , graph , visited));
        }
        return ans;

    }
int main()
{
	vector < vector < string > > equations;
	vector < double > values;

	vector < vector < string > > queries;

	int eq , qr;
	cin >> eq >> qr;

	for(int i = 0; i< eq; i++)
	{
		string u , v;
		cin >> u >> v;
		equations.push_back({u , v});
	}

	for(int i = 0; i< eq ; i++)
	{
		double val ;
		cin >> val;
		values.push_back(val);
	}

	for(int  i = 0 ; i < qr ; i++)
	{
		string x , y;
		cin >> x >> y;
		queries.push_back({x , y});
	}

	vector < double > result = calcEquation(equations , values , queries);

	for(auto it: result)
	{
		cout << it << " ";
	}
	cout << "\n";
}