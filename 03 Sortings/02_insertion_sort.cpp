#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
  for (int i = 1; i <= n - 1; i++)
  {
    int current = arr[i];
    int prev = i - 1;
    while (prev >= 0 and arr[prev] > current)
    {
      arr[prev + 1] = arr[prev];
      prev -= 1;
    }
    arr[prev + 1] = current;
  }
}

int main()
{
  int arr[] = {-10, 2, 3, 4, 5, 232, 1, -2, 4, 7, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertion_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << " ,";
  }

  return 0;
}