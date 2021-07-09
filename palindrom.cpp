#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int t,l;
    char a[1100];
    cin>>t;
    while(t--)
    {
        cin>>a;
        l=strlen(a);
        sort(a,a+l);
        if(a[0]==a[l-1])
            cout<<"-1"<<endl;
        else
            cout<<a<<endl;
    }
}
