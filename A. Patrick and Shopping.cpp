#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,path=0,add,k,g;
    cin>>a>>b>>c;
    add= a+b;//1st and 2nd shop distance
    k=min(a,b);

    g = max(a,b);


    path+=k;//small distance
    if(add>c)
        path+=c;
    else
        path+=add;
    if(g>c+k)
        path+=(c+k);
    else
        path+=g;
    cout<<path<<endl;
}
