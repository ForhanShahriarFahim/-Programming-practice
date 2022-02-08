#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int first, int last)
{
    int pivot = first, i = first, j = last;
    while(i<j)
    {
        while(arr[i]<=arr[pivot] && i<last) 
            i++;
        while(arr[j]>arr[pivot])
             j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[pivot],arr[j]);
    return j;
}


void Quick_sort(int arr[],int first,int last)
{
    if(first<last)
    {
        int p = partition(arr, first, last);
        Quick_sort(arr,first,p-1);
        Quick_sort(arr, p+1,last);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    Quick_sort(arr,0,n-1);
    cout<<"Sort array\n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}