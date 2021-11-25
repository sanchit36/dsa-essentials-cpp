#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int current = arr[i];
    int min_position = i;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[min_position])
      {
        min_position = j;
      }
    }
    swap(arr[min_position], arr[i]);
  }
}

int main()
{
  int arr[] = {-10, 2, 3, 4, 5, 232, 1, -2, 4, 7, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  selection_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << " ,";
  }

  return 0;
}