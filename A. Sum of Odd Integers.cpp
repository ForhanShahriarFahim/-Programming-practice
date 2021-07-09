#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{


    long long int no,k,t;
    cin>>t;
    while(t--)
    {
        cin>>no>>k;
        if(no%2==0)
        {
            if(k%2!=0)
            cout<<"NO"<<endl;

            else if(no>=k*k)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

        else if(no%2!=0)
        {
            if(k%2==0)
                cout<<"NO"<<endl;
            else if(no>=k*k)
               cout<<"YES"<<endl;
            else
              cout<<"NO"<<endl;

            }

    }
}
