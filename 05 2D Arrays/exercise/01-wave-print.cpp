#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
  bool reverse = false;
  int col = n - 1;
  vector<int> ans;
  while (col >= 0)
  {
    if (!reverse)
    {
      for (int row = 0; row <= m - 1; row++)
      {
        ans.push_back(arr[row][col]);
      }
    }
    else
    {
      for (int row = m - 1; row >= 0; row--)
      {
        ans.push_back(arr[row][col]);
      }
    }
    reverse = !reverse;
    col--;
  }
  return ans;
}

int main()
{
  vector<vector<int>> arr = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };
  int m = arr.size(), n = arr[0].size();
  vector<int> ans = WavePrint(m, n, arr);
  for (auto x : ans)
  {
    cout << x << " ,";
  }

  return 0;
}