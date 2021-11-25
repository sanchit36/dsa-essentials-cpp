#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
  if (flag)
    sort(a.begin(), a.end());
  else
    sort(a.begin(), a.end(), greater<int>());
  return a;
}

int main()
{
  vector<int> a = {3, 4, 2, 1, 8, 9};
  vector<int> sorted = sortingWithComparator(a, true);
  for (auto x : sorted)
  {
    cout << x << ", ";
  }
  sorted = sortingWithComparator(a, false);
  for (auto x : sorted)
  {
    cout << x << ", ";
  }
  return 0;
}