#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no,m;

    int test;
    cin>>test;
    while(test--)
    {

        cin>>no>>m;

        if(no%m==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
