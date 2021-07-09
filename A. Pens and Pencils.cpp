#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,d,k;
        int pen,pencil;
        cin>>a>>b>>c>>d>>k;
        pen = ceil(a/c);
        pencil = ceil(b/d);
        if(pen+pencil>k)
            cout<<"-1"<<endl;
        else
            cout<<pen<<" "<<pencil<<endl;

    }
}
