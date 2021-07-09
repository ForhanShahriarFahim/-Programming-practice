#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test,x,y;
    while(test--)
    {
        int magic;
        cin>>x>>y;
        if(x<y)
            cout<<"NO"<<endl;

        else if(x>=y)
        {
            cout<<"YES"<<endl;

        }

        else if(x%2==0)
        {

            while(1)
            {
                magic = (x*3)/2;
                if((magic%2==0&&magic<=y)||(magic%2!=0 && magic>=y))
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }

        }


    }
}

