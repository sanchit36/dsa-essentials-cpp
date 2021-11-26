#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{

  int count = 1;
  string ans;

  for (int i = 0; i < chars.size(); i++)
  {
    while (i < chars.size() - 1 && chars[i + 1] == chars[i])
    {
      count++;
      i++;
    }
    ans += chars[i];
    if (count == 1)
    {
      continue;
    }
    ans += to_string(count);
    count = 1;
  }

  chars.clear();

  for (int i = 0; i < ans.size(); i++)
  {
    chars.push_back(ans[i]);
  }

  return chars.size();
}

int main()
{
  vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
  cout << compress(chars) << endl;
  return 0;
}