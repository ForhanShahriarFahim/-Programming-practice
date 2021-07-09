#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,remain,problem=0;
    cin>>n>>k;
    remain=(240-k);
    if(remain==0)
        cout<<"0"<<endl;
    else
    {

    for(int i=1;i<=remain;i++)
    {
        problem+= 5*i;
        if(problem>remain)
        {
            if(i>n)
            {
                cout<<n<<endl;
                break;
            }
            else
            {
              cout<<i-1<<endl;
              break;
            }

        }
    }
    }
    return 0;
}
