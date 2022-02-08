#include<bits/stdc++.h>
using namespace std;
bubble_sort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[] = {5,4,6,8,3,10};
    bubble_sort(arr,6);
    printArray(arr,6);
}