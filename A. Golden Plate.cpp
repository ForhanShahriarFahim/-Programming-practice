#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,k,area,guild,result=0;
    cin>>w>>h>>k;
    result=((w*2+h*2)-4);
    if(k>0)
    {
        //cout<<result<<endl;

    for(int i=1;i<k;i++)
    {
        result+=(((w-4*i)*2+(h-4*i)*2)-4);
       // cout<<result<<endl;
    }


    }
    cout<<result<<endl;

}
