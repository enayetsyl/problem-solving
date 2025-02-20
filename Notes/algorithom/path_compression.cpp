#include <bits/stdc++.h>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i; // Initially, each node is its own parent
    }

    // Find with Path Compression
    int find(int node) {
        if (parent[node] != node) {
            cout << "Path compression for node " << node << endl;
            parent[node] = find(parent[node]); // Path compression
        }
        return parent[node];
    }

    // Union by Rank
    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            cout << "Union (" << u << ", " << v << ") -> New Parent Array: ";
            printParents();
        }
    }

    // Function to print parent array
    void printParents() {
        cout << "[ ";
        for (int p : parent) cout << p << " ";
        cout << "]" << endl;
    }
};

int main() {
    int n = 7; // Nodes from 0 to 6
    DSU dsu(n);

    // Step-by-step union operations
    dsu.unite(0, 1);
    dsu.unite(1, 2);
    dsu.unite(3, 4);
    dsu.unite(4, 5);
    dsu.unite(5, 6);
    dsu.unite(2, 6); // Merging both components

    cout << "\nBefore Path Compression (Find(6)):" << endl;
    dsu.printParents();

    cout << "\nApplying Path Compression by calling find(6):" << endl;
    dsu.find(6);

    cout << "\nAfter Path Compression:" << endl;
    dsu.printParents();

    return 0;
}
