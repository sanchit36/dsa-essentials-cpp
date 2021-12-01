#include <bits/stdc++.h>
using namespace std;

pair<int, int> staircase(vector<vector<int>> &mat, int n, int m, int key)
{
  if (key < mat[0][0] or key > mat[n - 1][m - 1])
    return {-1, -1};

  int i = 0, j = m - 1;

  while (i <= n - 1 and j >= 0)
  {
    if (mat[i][j] == key)
      return {i, j};
    else if (mat[i][j] > key)
    {
      j--;
    }
    else
    {
      i++;
    }
  }

  return {-1, -1};
}

int main()
{
  vector<vector<int>> mat = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
  };

  pair<int, int> coords = staircase(mat, mat.size(), mat[0].size(), 7);
  cout << coords.first << " " << coords.second << endl;

  return 0;
}