#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
  vector<vector<int>> pascal(n);
  if (n == 1)
  {
    pascal[0] = {1};
    return pascal;
  }

  if (n == 2)
  {
    pascal[0] = {1};
    pascal[1] = {1, 1};
    return pascal;
  }
  pascal[0] = {1};
  pascal[1] = {1, 1};

  for (int i = 2; i < n; i++)
  {
    vector<int> row;
    row.push_back(1);
    for (int j = 0; j <= pascal[i - 1].size() - 2; j++)
    {
      row.push_back(pascal[i - 1][j] + pascal[i - 1][j + 1]);
    }
    row.push_back(1);
    pascal[i] = row;
  }

  return pascal;
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> pascal = printPascal(n);

  for (auto row : pascal)
  {
    for (auto x : row)
    {
      cout << x << " ";
    }
    cout << endl;
  }
}
