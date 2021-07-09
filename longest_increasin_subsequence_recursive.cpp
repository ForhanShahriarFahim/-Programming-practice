#include<bits/stdc++.h>
using namespace std;
int LIS(int arr[], int i, int n, int prev)
{
    // Base case: if nothing is remaining
    if (i == n)
        return 0;

    // case 1: exclude the current element and process the
    // remaining elements
    int exclude = LIS(arr, i + 1, n, prev);

    // case 2: include the current element if it is greater
    // than previous element in LIS
    int include = 0;
    if (arr[i] > prev)
        include = 1 + LIS(arr, i + 1, n, arr[i]);

    // return maximum of above two choices
    return max(include, exclude);
}

int main()
{
    int arr[] = {3, 2, 6, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of the longest increasing subsequence is "
         << LIS(arr, 0, n, INT_MIN);

    return 0;
}