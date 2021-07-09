#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int n,arr[101];
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;

    }
}
