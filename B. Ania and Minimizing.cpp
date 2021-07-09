//@ author : Forhan Shahriar Fahim
//My last made me feel like
//i would never try again❤
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;

    if(n==1)
    {
        if(k!=0)
            cout<<"0"<<endl;
        else
            cout<<str;
        return 0;
    }
    else if(str[0]!='1' && k>0)
    {
        str[0]='1';
        k--;
        //cout<<"1st : "<<k<<endl;
    }
    for(int i = 1;i<n;i++)
    {
        if(k==0)
            break;
        else if(k>0 && str[i]!='0')
        {
            str[i] = '0';
            k--;
            //cout<<"2nd : "<<k<<endl;
        }
    }
    //cout<<"3 rd : "<<k<<endl;
    cout<<str<<endl;
}
