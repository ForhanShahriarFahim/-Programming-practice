#include<bits/stdc++.h>
using namespace std;

int LIS(int arr[], int n)
{
    int i,j;
    int b[n];

    for(int i = 0;i<n;i++)
    {
        b[i] = 1;
    }
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            if(arr[i]>arr[j] && b[i]<b[j]+1)
            {
                b[i] = b[j]+1;
            }
        }
    }

    int mx = 0;
    for(int i = 0;i<n;i++)
    {
        if(b[i]>mx)
        {
            mx = b[i];
        }
    }
    return mx;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result =  LIS(arr, n);

    cout<<"Result: "<<result<<endl;
}