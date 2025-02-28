#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N, E;
    cin >> N >> E;
    
    vector<vector<int>> adj_mat(N + 1, vector<int>(N + 1, INF));
    
    // Initialize diagonal as 0 (distance to itself is 0)
    for (int i = 1; i <= N; i++) {
        adj_mat[i][i] = 0;
    }

    // Read edges and take the minimum cost for duplicate edges
    for (int i = 0; i < E; i++) {
        int A, B, W;
        cin >> A >> B >> W;
        adj_mat[A][B] = min(adj_mat[A][B], W);
    }

    // Floyd-Warshall Algorithm
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (adj_mat[i][k] < INF && adj_mat[k][j] < INF) {
                    adj_mat[i][j] = min(adj_mat[i][j], adj_mat[i][k] + adj_mat[k][j]);
                }
            }
        }
    }

    // Queries
    int Q;
    cin >> Q;
    
    while (Q--) {
        int X, Y;
        cin >> X >> Y;
        if (adj_mat[X][Y] == INF)
            cout << "-1\n";
        else
            cout << adj_mat[X][Y] << "\n";
    }

    return 0;
}
