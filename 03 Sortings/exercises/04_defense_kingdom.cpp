#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
  vector<int> x, y;
  for (int i = 0; i < position.size(); i++)
  {
    x.push_back(position[i].first), y.push_back(position[i].second);
  }

  sort(x.begin(), x.end()), sort(y.begin(), y.end());

  int maxx = INT_MIN, maxy = INT_MIN;

  for (int i = 1; i < x.size(); i++)
    maxx = max(maxx, x[i] - x[i - 1] - 1);
  for (int i = 1; i < y.size(); i++)
    maxy = max(maxy, y[i] - y[i - 1] - 1);
  maxx = max(maxx, W - x[x.size() - 1]);
  maxy = max(maxy, H - y[y.size() - 1]);

  return (maxx * maxy);
}