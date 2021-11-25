#include <bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
  sort(length.begin(), length.end());
  int ans = 0;
  for (int i = 0; i < length.size() - 1; i++)
  {
    if (length[i + 1] - length[i] <= D)
      ans++, i++;
  }
  return ans;
}

int main()
{
  vector<int> l = {1, 3, 3, 9, 4};
  int D = 2;

  cout << pairSticks(l, D) << endl;
  return 0;
}