#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

int parent[100];

int findParent(int x) {
    if (parent[x] == x)
        return x;

    return parent[x] = findParent(parent[x]);
}

void unite(int a, int b) {
    a = findParent(a);
    b = findParent(b);

    if (a != b)
        parent[b] = a;
}

int main() {

    int V = 4;

    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    sort(edges.begin(), edges.end(),
         [](Edge a, Edge b) {
             return a.weight < b.weight;
         });

    for (int i = 0; i < V; i++)
        parent[i] = i;

    int cost = 0;

    cout << "Edges in MST:\n";

    for (auto edge : edges) {

        if (findParent(edge.u) != findParent(edge.v)) {

            unite(edge.u, edge.v);

            cout << edge.u << " - "
                 << edge.v << " : "
                 << edge.weight << endl;

            cost += edge.weight;
        }
    }

    cout << "Minimum Cost = " << cost << endl;

    return 0;
}
