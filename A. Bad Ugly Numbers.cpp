#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else if(n>1)
        {
            cout<<"2";
            for(int i=0;i<n-1;i++)
            {
                cout<<"3";
            }
            cout<<endl;
        }

    }

}
