#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7};

  // Fill constructor
  vector<int> visited(100, 0);

  // Pop back
  arr.pop_back();

  // Push_back O(1)
  arr.push_back(16);

  // Print all the elements
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Size of vector (No of elements)
  cout << arr.size() << endl;

  // Capacity of the vector
  cout << arr.capacity() << endl;
  return 0;
}