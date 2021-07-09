#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int n,a,b,one_liter,two_liter;
        cin>>n>>a>>b;
        if(n%2==0)
        {
            one_liter = a*n;
            two_liter = (n/2)*b;
            if(one_liter>two_liter)
                cout<<two_liter<<endl;
            else
                cout<<one_liter<<endl;
        }
        else
        {
            if(n>1)
            {
                one_liter = a*n;
                two_liter = (n/2)*b+a;

                if(one_liter>two_liter)
                   cout<<two_liter<<endl;
                else
                   cout<<one_liter<<endl;

            }
            else
            {
                one_liter = a*n;
                cout<<one_liter<<endl;
            }
        }
    }
}
