#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double AB,AC,BC,x,AD;

        cin>>AB>>AC>>BC>>x;
         AD =sqrt(x/(x+1))*AB;
        printf("Case %d: %.7lf\n",i,AD);

    }
}
