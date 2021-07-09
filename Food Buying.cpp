#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    double s;
    cin>>test;
    while(test--)
    {
        int x,div,temp;
        cin>>s;
        temp =s;
         x = s;

        while(x)
        {
            x = x/10;



            s = ceil(s/10);

            //cout<<s<<endl;
            if(x>0)
            {
                temp+=s;
            }
            else{
                cout<<temp<<endl;
                break;
            }

            //cout<<temp<<endl;
        }

    }
}
