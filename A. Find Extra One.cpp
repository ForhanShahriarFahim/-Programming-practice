#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,count=0,temp=0,ans;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>0)
        {
            count++;
        }
        else{
            temp++;
        }
         ans=min(count,temp);

    }
    if(ans==1 || ans == 0 )
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
