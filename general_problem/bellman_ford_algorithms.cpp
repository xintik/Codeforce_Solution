#include <bits/stdc++.h>
using namespace std;

int main() {
    int node, edge;
    cin >> node >> edge;

    vector<tuple<int,int,int>> graph;
    for (int i = 0; i < edge; i++) {
        int src, dis, wt;
        cin >> src >> dis >> wt;
        graph.push_back({src, dis, wt});
    }

    int source;
    cin >> source;

    vector<int> distance(node, INT_MAX);
    distance[source] = 0;

    // Relax edges (V - 1) times
    for (int i = 0; i < node - 1; i++) {
        for (auto &it : graph) {
            int u, v, w;
            tie(u, v, w) = it;
            if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
            }
        }
    }

    // Check for negative cycle
    for (auto &it : graph) {
        int u, v, w;
        tie(u, v, w) = it;
        if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
            cout << "Find the negative edge\n";
            return 0;
        }
    }

    // Print result
    for (int i = 0; i < node; i++) {
        if (distance[i] == INT_MAX) cout << i << " INF\n";
        else cout << i << " " << distance[i] << "\n";
    }

    return 0;
}
