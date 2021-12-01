#include <bits/stdc++.h>
using namespace std;

int mangoTrees(vector<vector<char>> &farm)
{
  int n = farm.size();
  int maxArea = -1;

  vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
      if (farm[i - 1][j - 1] == '#')
      {

        prefix[i][j] += 1;
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      // top left
      int tl = prefix[i][j];
      // top right
      int tr = prefix[i][n] - prefix[i][j];
      // bottom left
      int bl = prefix[n][j] - prefix[i][j];
      // bottom right
      int br = prefix[n][n] - tl - tr - bl;

      vector<int> temp = {tl, tr, bl, br};
      int min = *min_element(temp.begin(), temp.end());
      maxArea = max(maxArea, min);
    }
  }

  return maxArea;
}

int main()
{
  vector<vector<char>> farm = {
      {'.', '#', '#', '.', '.', '.'},
      {'#', '.', '.', '#', '#', '.'},
      {'.', '#', '.', '.', '.', '.'},
      {'.', '#', '#', '.', '.', '#'},
      {'#', '.', '.', '#', '#', '.'},
      {'.', '#', '.', '.', '.', '.'},
  };
  cout << "MAX AREA: " << mangoTrees(farm) << endl;
  return 0;
}