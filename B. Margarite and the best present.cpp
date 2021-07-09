#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,l,r,ans;
    cin>>test;
    while(test--)
    {
        cin>>l>>r;
        if(l%2==0)
        {
            if(r%2==0)
            ans = (l+r)/2;
            else
                ans = -(r-l+1)/2;
        }
        else
        {
            if(r%2!=0)
                ans = -(l+r)/2;
            else
                ans = (r-l+1)/2;
        }
        cout<<ans<<endl;
    }
}
