#include<bits/stdc++.h>
using namespace std;
vector < int > dijstar(vector < vector < pair < int , int > > > &graph , int n , int source)
{
    vector < int > distance(n , INT_MAX);
    distance[source] = 0;
    priority_queue < pair < int , int > , vector < pair < int , int > >, greater <pair < int , int > > > pq;

    pq.push({ 0 , source}) ; // distance and source;

    while(!pq.empty())
    {
        auto it = pq.top();

        int u = it.second;
        int d = it.first;
        pq.pop();
        if(d > distance[u]) continue; // already better option
        // bfs
        for(auto &neighbor : graph[u])
        {
            int v = neighbor.first;
            int wt = neighbor.second;
            if(distance[u] + wt < distance[v])
            {
                distance[v] = distance[u] + wt;
                pq.push({ distance[v] , v });
            }
        }

    }
    return distance;
}
int main()
{
    int n , m;
    cin >> n >> m;
    vector < vector < pair < int , int  >  > > graph(n);
    for(int i = 0 ; i < m; i++)
    {
        int u , v , wt;
        cin >> u >> v >> wt;
        u-- ;
        v--;
        graph[u].push_back({v , wt});
    }
    int source;
    cin >> source;
    source--;
    vector < int > ans = dijstar(graph , n , source);
    for(auto &it : ans)
    {
        if(it == INT_MAX)
        {
            cout << "INF" << " ";
        }
        else
        {
            cout << it << " ";
        }
    }
    cout << "\n";
}