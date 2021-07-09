#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a,cnt=0,sum=0;
        while(n--)
        {
            cin>>a;
            sum+=a;
            if(a==0)
            {
                cnt++;
                sum+=1;
            }
        }
        if(sum==0)
            cout<<cnt+1<<endl;
        else
            cout<<cnt<<endl;
    }
}
