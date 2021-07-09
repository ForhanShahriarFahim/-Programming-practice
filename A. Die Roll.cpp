#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int large;
    large = max(a,b);
    if(large==1)
        cout<<"1/1";
    else if(large==2)
        cout<<"5/6";
    else if(large==3)
        cout<<"2/3";
    else if(large==4)
        cout<<"1/2";
    else if(large==5)
        cout<<"1/3";
    else if(large==6)
        cout<<"1/6";
    return 0;

}
