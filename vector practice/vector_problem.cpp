#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> v = {
      {10, 20, 30},
      {40, 50, 60},
      {70, 80, 90}};

  int x = 100;
  int n = v.size(); 
  int m = v[0].size();
  if (v.empty())
  {
    return 0;
  };

  int i = 0, j = m-1;

while(i<n && j >=0){
  if(v[i][j] == x){
    cout<< "Found at (" << i << "," << j << ")";
    return 0;
  } else if (v[i][j]>x) {
    j--;
  } else {
    i++;
  }
}

  cout << "Not Found";
  return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   vector<vector<int>> v = {
//       {10, 20, 30},
//       {40, 50, 60},
//       {70, 80, 90}};

//   int x = 100;
//   int n = v.size(); 
//   int m = v[0].size();
//   if (v.empty())
//   {
//     return 0;
//   };

//   int i = 0, j = m-1;

// while(i<n && j >=0){
//   if(v[i][j] == x){
//     cout<< "Found at (" << i << "," << j << ")";
//     return 0;
//   } else if (v[i][j]>x) {
//     j--;
//   } else {
//     i++;
//   }
// }

//   cout << "Not Found";
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   vector<vector<int>> v = {
//       {10, 20, 30},
//       {40, 50, 60},
//       {70, 80, 90}};

//   int x = 100;

//   if (v.empty())
//   {
//     return 0;
//   };

//   for (int i = 0; i < v.size(); i++)
//   {
//     for (int j = 0; j < v[0].size(); j++)
//     {
//       if (v[i][j] == x)
//       {
//         cout << i << " " << j;
//         return 0;
//       }
//     }
//   };

//   cout << "Not Found";
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   vector<vector<int>> v = {{3, 2, 8},
//                            {1, 5, 6},
//                            {4, 1, 9}};

//   int k = 2;

//   cout << "Before sorting : " << endl;

//   for (auto row : v)
//   {
//     for (auto num : row)
//     {
//       cout << num << " ";
//     }
//     cout << endl;
//   }
//   if (k > v[0].size())
//   {
//     return 0;
//   };
//   sort(v.begin(), v.end(), [k](const vector<int> &a, const vector<int> &b)
//        { return a[k] < b[k]; });

//           cout
//       << "After sorting : " << endl;

//   for (auto row : v)
//   {
//     for (auto num : row)
//     {
//       cout << num << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }