#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>arr[i];
        a = arr[i]+mx;
        mx = max(mx,a);
        cout<<a<<" ";


    }

}
