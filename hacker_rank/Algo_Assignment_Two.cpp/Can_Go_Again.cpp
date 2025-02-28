#include<bits/stdc++.h>

using namespace std;
int N, E, S, T;
vector<int> dis;

bool negative_cycle = false;

class Edge {
  public:
  int a;
  int b;
  int w;
  Edge(int a, int b, int w){
    this->a = a;
    this->b = b;
    this->w = w;
  }
};

vector<Edge> edge_list;

void bellman_ford(){

  for(int i = 1; i<= N-1; i++){
    for (auto &e: edge_list){
      if(dis[e.a] != INT_MAX && dis[e.a] + e.w < dis[e.b]){
        dis[e.b] = dis[e.a] + e.w;
      }
    }
  }

  for(auto &e: edge_list){
    if(dis[e.a] != INT_MAX && dis[e.a] + e.w < dis[e.b])
    {negative_cycle = true;
      return;
    }
  }


}


int main(){
  cin >> N >> E;

  while(E--){
    int A, B, W;
    cin >> A >> B >> W;
    edge_list.push_back(Edge(A, B, W));
  };


  cin >> S >> T;
  dis.assign(N+1, INT_MAX);
  dis[S] = 0;
 

 
    bellman_ford();


  if(negative_cycle){
    cout << "Negative Cycle Detected" << endl;
    return 0;
  } 
  while(T--){
    int destination;
    cin >> destination;

    if(dis[destination] == INT_MAX){
      cout << "Not Possible" << endl;
    } else {
      cout << dis[destination] << endl;
    }
  }
  return 0;
}