#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, vector<vector<int>>& graph, set<int>& visited) {
    visited[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited.count(neighbor)) {
            if (dfs(neighbor, node, graph, visited, vec))
                return true; // stop immediately if cycle found
        }
        else if (neighbor != parent) {
            // Visited and not parent → last edge of cycle
          
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1); // 1-based

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        vector < bool > visited(n+1 , false);
        if (dfs(1, -1, graph, visited)) {
        cout << "Cycle detected\n";
       cout << u << v << endl;

    } 
    }
}

    
    

    
