#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void dijkstra(int V, vector<vector<pair<int,int>>> &graph, int source) {

    vector<int> dist(V, INT_MAX);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[source] = 0;

    pq.push({0, source});

    while (!pq.empty()) {

        int distance = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        if (distance > dist[node])
            continue;

        for (auto edge : graph[node]) {

            int nextNode = edge.first;
            int weight = edge.second;

            if (dist[node] + weight < dist[nextNode]) {

                dist[nextNode] = dist[node] + weight;

                pq.push({
                    dist[nextNode],
                    nextNode
                });
            }
        }
    }

    cout << "Shortest distances:\n";

    for (int i = 0; i < V; i++)
        cout << source << " -> "
             << i << " = "
             << dist[i] << endl;
}

int main() {

    int V = 6;

    vector<vector<pair<int,int>>> graph(V);

    graph[0].push_back({1, 4});
    graph[0].push_back({2, 2});

    graph[1].push_back({2, 5});
    graph[1].push_back({3, 10});

    graph[2].push_back({4, 3});

    graph[4].push_back({3, 4});
    graph[3].push_back({5, 11});

    dijkstra(V, graph, 0);

    return 0;
}
