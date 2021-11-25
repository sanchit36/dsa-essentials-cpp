#include <bits/stdc++.h>
using namespace std;

// O(N + RANGE)
void counting_sort(int a[], int n)
{
  // Largest element
  int largest = -1;
  for (int i = 0; i < n; i++)
    largest = max(largest, a[i]);

  // create a count vector
  vector<int> freq(largest + 1, 0);

  for (int i = 0; i < n; i++)
  {
    freq[a[i]]++;
  }

  int j = 0;
  for (int i = 0; i <= largest; i++)
  {

    while (freq[i] > 0)
    {
      a[j] = i;
      freq[i]--;
      j++;
    }
  }
}

int main()
{
  int arr[] = {2, 3, 4, 5, 232, 1, 4, 7, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  counting_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << " ,";
  }

  return 0;
}