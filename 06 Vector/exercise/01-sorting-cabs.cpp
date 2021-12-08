#include <bits/stdc++.h>
using namespace std;

int distanceFromOrigin(pair<int, int> coords)
{
  int x = coords.first, y = coords.second;
  return x * x + y * y;
}

bool compare(pair<int, int> c1, pair<int, int> c2)
{
  int d1 = distanceFromOrigin(c1);
  int d2 = distanceFromOrigin(c2);
  return d1 < d2;
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
  sort(v.begin(), v.end(), compare);
  return v;
}

int main()
{
  vector<pair<int, int>> v = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};

  vector<pair<int, int>> sorted = sortCabs(v);

  for (auto c : sorted)
  {
    cout << c.first << " " << c.second << endl;
  }

  return 0;
}