#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,rating,ind=0,cnt=0,arr[101]= {0},str[101] = {0};
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>rating;
        if(arr[rating]==0)
        {
            arr[rating]=1;
            cnt++;
            str[ind++]=i+1;
        }

    }
    if(cnt>=k)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<str[i]<<" ";
        }
    }
    else
        cout<<"NO"<<endl;
}
