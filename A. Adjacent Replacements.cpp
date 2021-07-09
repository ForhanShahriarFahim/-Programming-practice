#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i;
    cin>>n;
    int arr[n],str[10001];
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
        if(arr[i]%2!=0)
        {
            str[i] = arr[i];
        }
        else
            str[i] = arr[i]-1;

    }
    for(i=0;i<n;i++)
        printf("%d ",str[i]);

}
