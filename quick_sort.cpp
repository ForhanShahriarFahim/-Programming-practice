#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int first, int last)
{
     int pivot = first, i = first, j = last; // pivot
     while (i < j)
    {
        while (arr[i] <= arr[pivot] && i<last)
            i++;
        while (arr[j] > arr[pivot])
            j--;
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[pivot], arr[j]);
    return j;
}
void quickSort(int arr[], int first, int last)
{
    if (first < last) 

    {
         int pi = partition(arr, first, last);
         quickSort(arr, first, pi - 1);
         quickSort(arr, pi + 1, last);
    
    }
}
void printArray(int arr[], int size)
{
     int i;
     for (i = 0; i < size; i++) 
     cout << arr[i] << " ";
     cout << endl;
}
int main()
{
    int n, arr[100];
    //cout<<"Elements to enter: ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
