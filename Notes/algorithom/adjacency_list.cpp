#include <bits/stdc++.h>
using namespace std;

void recommendMovies(int user, vector<vector<int>>& adj_list, unordered_map<int, string>& movies) {
    unordered_set<int> watched(adj_list[user].begin(), adj_list[user].end());
    unordered_set<int> recommended;

    for (int movie : adj_list[user]) {
        for (int similar_user : adj_list[movie]) {
            if (similar_user != user) {
                for (int new_movie : adj_list[similar_user]) {
                    if (!watched.count(new_movie)) {  // O(1) lookup
                        recommended.insert(new_movie); // O(1) insert
                    }
                }
            }
        }
    }

    cout << "Recommended movies for user " << user << ": ";
    for (int movie : recommended) {
        cout << movies[movie] << " ";
    }
    cout << endl;
}

int main() {
    int users, movies_count, edges;
    cout << "Enter number of users: ";
    cin >> users;
    cout << "Enter number of movies: ";
    cin >> movies_count;
    cout << "Enter number of user-movie interactions: ";
    cin >> edges;

    int total_nodes = users + movies_count;  
    vector<vector<int>> adj_list(total_nodes);
    unordered_map<int, string> movies;

    cout << "Enter movie IDs and names: \n";
    for (int i = users; i < total_nodes; i++) {
        string movie_name;
        cout << "Movie ID " << i << ": ";
        cin.ignore();
        getline(cin, movie_name);
        movies[i] = movie_name;
    }

    cout << "Enter " << edges << " pairs of (user, movie) interactions:\n";
    for (int i = 0; i < edges; i++) {
        int user, movie;
        cin >> user >> movie;
        adj_list[user].push_back(movie);
        adj_list[movie].push_back(user);  // Bidirectional connection
    }

    int user_id;
    cout << "Enter user ID for recommendations: ";
    cin >> user_id;

    recommendMovies(user_id, adj_list, movies);

    return 0;
}
