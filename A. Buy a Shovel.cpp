#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,cnt=0,sum;
    cin>>k>>r;
    for(int i=1;;i++)
    {
        sum = i*k;
        if(sum%10!=r||sum%10==0)
        {
            cnt++;
            if(sum%10==0)
            {
                cout<<cnt<<endl;
                break;
            }

        }

        else if(sum%10==r)
        {
            if(cnt==0)
            {
                cout<<"1"<<endl;
                break;
            }

            else
                {
                    cout<<cnt+1<<endl;
                    break;
                }
        }
    }
}
