#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],index,pos,element,number;
    printf("Enter the no of array elements :\n");
    cin>>element;
    printf("Enter the array : \n");

    for(int i=0;i<element;i++)
    {
        cin>>arr[i];
    }
    printf("Enter the no and position  : \n");
    cin>>number>>pos;
    for(int i=element;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    element++;
    arr[pos] = number;
    printf("Printing after inserting  : \n");
    for(int i=0;i<element;i++)
    {
        cout<<arr[i]<<" ";
    }
}
