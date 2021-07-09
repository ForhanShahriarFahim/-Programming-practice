#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[100];
    int total;
    printf("Enter the number of elements : \n");

    cin>>total;
    printf("Enter the array elements : \n");
    for(int i=0;i<total;i++)
    {
        cin>>arr[i];
    }

    for(int i=total;i>=5;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[4] = "Karim";
    total++;
    printf("Printing the array elements :\n");
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
}
