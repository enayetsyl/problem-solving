#include <bits/stdc++.h>

using namespace std;

const int max_n = 1000;
vector<int> my_list[max_n];

int main()
{
   int N, E;

   cin >> N >> E;

   for (int i =0; i<E; i++){
    int X, Y;
    cin >> X >> Y;
    my_list[X].push_back(Y);
    my_list[Y].push_back(X);
   }

   int Q;

   cin >> Q;

   for (int i = 0; i < Q; i++){

    int X;

    cin >> X;

    if(my_list[X].empty()){
      cout << "-1" << endl;
    } else {
      sort(my_list[X].rbegin(), my_list[X].rend());
      for(int child : my_list[X]){
        cout << child << " ";
      }
      cout << endl;
    }
   }

    return 0;
}
