#include <iostream>
using namespace std;

int maxSumSubarray(int *arr, int n)
{
  int cs = arr[0];
  int ms = arr[0];
  for (int i = 1; i < n; i++)
  {
    cs = max(arr[i], arr[i] + cs);
    ms = max(ms, cs);
  }
  return ms;
}

int main()
{
  int arr[] = {1, -2, 3, 4, 4, -2};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << maxSumSubarray(arr, n) << endl;
  return 0;
}
