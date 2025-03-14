#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> v= {
      {3, 2, 1},
      {1, 5, 6},
      {4, 1, 9}
  };
  
  cout << "Before sorting : " << endl;

  for(auto row: v){
    for(auto num: row){
      cout <<num << " ";
    }
    cout <<endl;
  }

  sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b){
    return a[0] < b[0];
  });

  cout << "After sorting : " << endl;

  for(auto row: v){
    for(auto num: row){
      cout <<num << " ";
    }
    cout<< endl;
  }


    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<vector<int>> v = {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 10, 11, 12}
//   };

//     for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v[i].size(); j++){
//       cout << v[i][j] << " ";
//     };
//     cout << endl;
//   }
 
// for(int i=0; i< v.size(); i++){
//   if(v[i].size()>2){
//     v[i].erase(v[i].begin()+2);
//   }
// }

//   for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v[i].size(); j++){
//       cout << v[i][j] << " ";
//     };
//     cout << endl;
//   }

//   sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b){
//     return accumulate(a.begin(), a.end(), 0) < accumulate(b.begin(), b.end(), 0);
//   });

//   cout << "\nAfter sorting:" << endl;
//   for (auto row : v) {
//       for (int num : row) cout << num << " ";
//       cout << endl;
//   }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//       vector<vector<int>> v = {
//       {1, 2, 3},
//       {4, 5, 6},
//       {7, 8, 9}
//   };

//   for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v[i].size(); j++){
//       cout << v[i][j] << " ";
//     };
//     cout << endl;
//   }

//   v.erase(v.begin()+1);

//   for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v[i].size(); j++){
//       cout << v[i][j] << " ";
//     };
//     cout << endl;
//   }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<vector<int>> v = {
//       {1, 2, 3},
//       {4, 5, 6},
//       {7, 8, 9}
//   };

//   for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v[i].size(); j++){
//       cout << v[i][j] << " ";
//     };
//     cout << endl;
//   }

// v.push_back({10,11,12});
// cout << endl;
//   for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v[i].size(); j++){
//       cout << v[i][j] << " ";
//     };
//     cout << endl;
//   }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<string> fruits = {"apple", "banana", "cherry"};

//     fruits.push_back("date");
//     fruits.push_back("elderberry");

//     for(auto f: fruits){
//       cout << f << " ";
//     }
//     cout << endl;

//     fruits.assign({"grape", "kiwi", "lemon"});

//     for(auto f: fruits){
//       cout << f << " ";
//     }

//     cout << endl;

//     fruits.erase(fruits.begin()+1);

//     for(auto f: fruits){
//       cout << f << " ";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
//     vector<int> v2;
//     vector<int> v3;
//     vector<int> v4;

//     v2.assign(v1.begin()+2, v1.begin() + 5);

//     cout << "After assign from range: ";
//     for (int num : v2) {
//         cout << num << " ";
//     }
//     cout << endl;

//     v3.assign(v4.begin(), v4.end());

//     cout << "After assign from range: ";
//     for (int num : v3) {
//         cout << "v3 array" << num << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40, 50};

//     v.assign(3, 100);

//         for(int num:v){
//       cout<< num << " ";
//     }
//     cout << endl;

    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5};

//     v.resize(8);
//     for(int num:v){
//       cout<< num << " ";
//     }
//     cout << endl;
//     v.resize(3);

//     for(int num:v){
//       cout<< num << " ";
//     }

//     v.resize(6, 100);
//     cout << endl;

//     for(int num:v){
//       cout<< num << " ";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector <int> v1 ={1, 2, 3, 4, 5};

//     vector<int> v2 = {10,20,30};

//     v1.swap(v2);

//     for(auto num:v1){
//       cout << num << " ";
//     }

//     cout<< endl;
//     for(auto num:v2){
//       cout << num << " ";
//     }

//     cout<< endl;

//     v1.clear();
//     for(auto num:v1){
//       cout << num << " ";
//     }

//     cout<< "v1 size = " << v1.size() << "capacity == " << v1.capacity();

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   vector <int> v = {10, 20, 30};

//   v.push_back(40);

//   v.emplace_back(50);

//   for(auto num:v){
//     cout << num << endl;
//   }
  
//   v.insert(v.begin()+1, 15);

//   v.emplace(v.begin()+2,25);
  
//   for(auto num:v){
//     cout << num << endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector <int> v = {10, 20, 30};

//     v.push_back(40);

//     cout<< "After push_back: ";
//     for(auto num:v){
//       cout<<num << " ";
//     }
//     cout << endl;
//     v.insert(v.begin()+1, 15);
//     cout<< "After insert: ";
//     for(auto num:v){
//       cout<<num << " ";
//     }
//     cout << endl;

//     v.erase(v.begin()+2);

//     cout<< "After erase: ";
//     for(auto num:v){
//       cout<<num << " ";
//     }
//     cout << endl;

//     v.erase(v.begin()+v.size()-1);

//     cout<< "After erase last element: ";
//     for(auto num:v){
//       cout<<num << " ";
//     }
//     cout << endl;

//     v.insert(v.begin(), 5);

//     cout<< "After adding at beginning: ";
//     for(auto num:v){
//       cout<<num << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v={10, 20, 30, 40, 50};

//     cout<< "Using normal iterator: " ;

//     for(auto it = v.begin(); it != v.end(); it++){
//       cout << *it << " ";
//     }

//     cout << endl;

//     cout<< "Using reverse iterator: " ;

//     for(auto it = v.rbegin(); it != v.rend(); it++){
//       cout << *it << " ";
//     }

//     cout << endl;

//     cout<< "Using constant iterator: " ;

//     for(auto it = v.cbegin(); it != v.cend(); it++){
//       cout << *it << " ";
//     }

//     cout << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   vector<int> v = {10, 20, 30, 40, 50};

//   cout << "Using []: " << v[2] << endl;

//   cout << "Using at(): " << v.at(2) << endl;

//   cout << "Front: " << v.front() << ", Back : " << v.back() << endl;

//   cout << "Using data(): " << *v.data() << endl;

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(10);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(20);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(30);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(40);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(50);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     v.shrink_to_fit();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     v.shrink_to_fit();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     v.shrink_to_fit();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     v.shrink_to_fit();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     v.shrink_to_fit();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(10);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(20);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(30);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(40);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.push_back(50);
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     v.pop_back();
//     cout<< "Size = " << v.size() << " " << "Capacity = " << v.capacity() << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v1(5,1);
//     cout << "v1 size = " << v1.size() << " v1 capacity = " << v1.capacity() << endl;

//     v1.resize(10);

//     cout << "v1 size = " << v1.size() << " v1 capacity = " << v1.capacity() << endl;

//     v1.shrink_to_fit();
//     cout << "v1 size = " << v1.size() << " v1 capacity = " << v1.capacity() << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;
//     vector <int> v2(5,0);
//     vector<int> v3 = {10,20,30,40,50};
//     cout << "(Empty): Size =" << v.size() <<endl;
//     cout << "Initialized with 0s: Size =" << v2.size()<<endl;
//     cout << "From Array: Size =" << v3.size()<<endl;

//     return 0;
// }