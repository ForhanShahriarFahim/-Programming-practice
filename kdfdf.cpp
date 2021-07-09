#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
            cout<<"  ";
        for(j=0;j<=i;j++)
        {
            cout<<j;
            if(i!=0)
            cout<<" ";
          }
        for(j=i-1;j>=0;j--)
        {
            cout<<j;
            if(j!=0)
            cout<<" ";
        }
            cout<<"\n";
    }
}
