#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,n;
    cin>>t;
    getchar();
    while(n--)
    {
        cin>>n>>m;
        if(n%m==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
