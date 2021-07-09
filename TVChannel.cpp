#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,channel1,channel2,result;
    while(1)
    {
        cin>>a>>b;
        channel1 = abs(b-a);
        channel2 = 99-abs(b-a)+1;
        /*if(channel2==0&&(a==0||b==0))
                channel2=1;*/
        result = min(channel1,channel2);
        if(a==-1)
        break;
        else
            cout<<result<<endl;

    }
}
