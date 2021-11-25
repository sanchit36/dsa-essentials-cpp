#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
  if (a.first == b.first)
    return a.second < b.second;
  else
    return a.first < b.first;
}

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
  sort(v.begin(), v.end(), compare);
  return v;
}

int main()
{

  vector<pair<int, int>> v = {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}};
  vector<pair<int, int>> sorted = sortCartesian(v);

  for (auto x : sorted)
  {
    cout << "(" << x.first << "," << x.second << ")" << endl;
  }

  return 0;
}