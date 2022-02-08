#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int n, int sum)
{

    bool T[n + 1][sum + 1];


    for (int j = 1; j <= sum; j++)
    {
        T[0][j] = false;
    }

    for (int i = 0; i <= n; i++)
    {
        T[i][0] = true;
    }

    // do for i'th item
    for (int i = 1; i <= n; i++)
    {
 
        for (int j = 1; j <= sum; j++)
        {

            if (arr[i - 1] > j)
            {
                T[i][j] = T[i - 1][j];
            }
            else
            {
                T[i][j] = T[i - 1][j] || T[i - 1][j - arr[i - 1]];
            }
        }
    }


    return T[n][sum];
}

int main()
{

    int arr[] = {7, 3, 2, 5, 8};
    int sum = 18;

    // total number of items
    int n = sizeof(arr) / sizeof(arr[0]);

    if (subsetSum(arr, n, sum))
    {
        cout << "given sum exists";
    }
    else
    {
        cout << "given sum does not exist";
    }

    return 0;
}