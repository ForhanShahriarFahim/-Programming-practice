#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=0;;i++)
    {
        int x = __gcd(a,n);
       // cout<<x<<endl;
        if(x<n)
        {
            n = n-x;
          //  cout<<n<<endl;
        }
        else
        {
            cout<<"0"<<endl;
            break;
        }

        int y = __gcd(b,n);
       // cout<<y<<endl;

        if(y<n)
        {
            n = n-y;
           // cout<<"my: " <<n<<endl;
        }
        else
        {
            cout<<"1"<<endl;
            break;
        }
    }

}
