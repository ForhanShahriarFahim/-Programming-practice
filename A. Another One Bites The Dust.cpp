#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;

    if(a>b||a<b)
    {

    if(a<b)
        b=a;

    else a=b;

    cout<<a*2+c*2+1<<endl;

    }
    else if(a==b)
    {
        cout<<a*2+c*2<<endl;
    }
    return 0;
}
