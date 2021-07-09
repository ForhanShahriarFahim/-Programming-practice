//@ author : Forhan Shahriar Fahim
//created  : 3/23/2020
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,temp=999;
    cin>>n;
    int arr[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>p[i];
        temp = min(temp,p[i]);
        sum+=temp*arr[i];
    }

        cout<<sum<<endl;

}
