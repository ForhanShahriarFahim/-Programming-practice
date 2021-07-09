#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int a,b;
    while(test--)
    {
        cin>>a>>b;
        if(b==a)
        {
            cout<<"0"<<endl;
        }
        else if(b>a)
        {
            if((b-a)%2!=0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else if(a>b)
        {
             if((b-a)%2==0)
             cout<<"1"<<endl;
            else
                cout<<"2"<<endl;

        }
    }
}
