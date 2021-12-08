#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
  int n = matrix.size();
  // Phase 1 - reverse transpose
  for (int i = 0; i < n; i++)
  {
    for (int j = n - i - 2; j >= 0; j--)
    {
      if (i != n - j - 1)
      {
        swap(matrix[i][j], matrix[n - j - 1][n - i - 1]);
      }
    }
  }

  // Phase 2 - swap alternate rows
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      swap(matrix[i][j], matrix[n - i - 1][j]);
    }
  }
}

int main()
{
  vector<vector<int>> matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
  rotate(matrix);
  for (auto row : matrix)
  {
    for (auto number : row)
    {
      cout << number << ",";
    }
    cout << endl;
  }

  return 0;
}