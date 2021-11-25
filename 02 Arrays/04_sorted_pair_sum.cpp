#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
  int n = arr.size();
  int s = 0, e = n - 1;
  int diff = INT_MAX;
  pair<int, int> result;
  while (s < e)
  {
    if (abs(arr[s] + arr[e] - x) < diff)
    {
      result = {s, e};
      diff = abs(arr[s] + arr[e] - x);
    }

    if (arr[s] + arr[e] > x)
    {
      e--;
    }
    else
    {
      s++;
    }
  }

  return result;
}