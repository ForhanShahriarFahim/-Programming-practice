#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sereja=0,dima=0,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;)
    {
        if(flag%2==0)
        {
            if(arr[i]>arr[n-1])
            {
                sereja+=arr[i];
                i++;
            }

            else
            {
                sereja+=arr[n-1];
                n--;
            }

        }
        else
        {
            if(arr[i]>arr[n-1])
            {
                dima+=arr[i];
                i++;
            }
            else
            {
                dima+=arr[n-1];
                n--;
            }
        }
        flag++;
    }
    cout<<sereja<<" "<<dima<<endl;
}
