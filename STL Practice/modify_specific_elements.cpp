#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a, new_val;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
      int x;
      cin >> x;
      v.push_back(x);
    }
    cin >> a >> new_val;

    v[a] = new_val;
    for(auto num:v){
      cout << num << endl;
    }
    return 0;
}