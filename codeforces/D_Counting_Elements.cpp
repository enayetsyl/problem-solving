#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  cin >> n;
  int arr[n];
  int result = 0;

  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    arr[i] = m;
  }

  for (int i = 0; i < n; i++)
  {
    int itemToCheck = arr[i] + 1;
    for (int j = 0; j < n; j++)
    {
      if (arr[j] == itemToCheck)
      {
        result++;
        break;
      }
    }
  }

  cout << result;

  return 0;
}