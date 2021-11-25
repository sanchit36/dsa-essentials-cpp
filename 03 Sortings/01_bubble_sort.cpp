#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
  for (int i = 1; i <= n - 1; i++)
  {
    int swapping = 0;
    for (int j = 0; j <= n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapping = 1;
      }
    }
    if (swapping == 0)
      break;
  }
}

int main()
{
  int arr[] = {-10, 2, 3, 4, 5, 232, 1, -2, 4, 7, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << " ,";
  }

  return 0;
}