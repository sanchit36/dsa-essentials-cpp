#include <bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
  int n = v.size(), m = v[0].size();
  vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      prefix[i][j] = v[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
    }
  }

  return prefix[er + 1][ec + 1] - prefix[sr][ec + 1] - prefix[er + 1][sc] + prefix[sr][sc];
}

int main()
{
  vector<vector<int>> v = {{1, 2, 3, 4, 6},
                           {5, 3, 8, 1, 2},
                           {4, 6, 7, 5, 5},
                           {2, 4, 8, 9, 4}};
  cout << sum(v, 0, 0, 1, 1) << endl;
  return 0;
}