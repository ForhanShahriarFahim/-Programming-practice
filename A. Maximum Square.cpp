#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i;
    cin>>n;
    while(n--)
    {
        int a,c=1,j;
        cin>>a;
        int arr[a];
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
        }
         sort(arr,arr+a);
        for(j=a-1;j>=0;j--)
        {
            if(arr[j]<c)
                break;
            c++;
        }
        cout<<c-1<<endl;
    }
    return 0;
}
