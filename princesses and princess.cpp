#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,unmarried = -1,k,m[100000]={0},val;
        cin>>n;//no of daughter
        for(int i=0;i<n;i++)
        {
            int flag = 0;
            cin>>k;//daughter list
            for(int j=0;j<k;j++)
            {
                cin>>val;
                //cout<<"Value fo val : "<<val<<endl;
                if(m[val-1]==0 && flag==0)
                {
                    m[val-1]++;//increment from 0
                    flag = 1;
                }
            }
            if(flag==0 &&unmarried ==-1)
            {
                unmarried = i+1;
                //cout<<"unmarried : "<<unmarried<<endl;
            }

        }
        if(unmarried == -1)
            cout<<"OPTIMAL\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                if(m[i]==0)
                {
                    cout<<"IMPROVE\n"<<unmarried<<" "<<i+1<<endl;
                    break;
                }
            }
        }
    }
}
