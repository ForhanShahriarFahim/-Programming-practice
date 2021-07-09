#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int result=abs(a-b)+x;
        if(result>=n-1)
        {
            cout<<n-1<<endl;
        }
        else
        {
            cout<<result<<endl;
        }
    }
    return 0;
}
