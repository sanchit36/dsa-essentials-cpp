#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int n = A.size();
    int s = 0;
    int e = n - 1;
    int lb = INT_MIN;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (lb <= A[mid] && A[mid] <= Val)
            lb = A[mid];

        if (A[mid] == Val)
            return lb;
        else if (A[mid] > Val)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return lb == INT_MIN ? -1 : lb;
}

int main()
{
    vector<int> A = {-1, -1, 2, 3, 5};
    cout << lowerBound(A, 4);
    return 0;
}