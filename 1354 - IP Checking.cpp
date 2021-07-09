#include<bits/stdc++.h>
using namespace std;
int DecBin(int n)
{
    int remainder = 1,sum = 0;
    while(n>0)
    {
        sum+=n%2*remainder;
        remainder*=10;
        n/=2;
    }
    return sum;
}
int main()
{
    int t,d1,d2,d3,d4,b1,b2,b3,b4;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d.%d.%d.%d",&d1,&d2,&d3,&d4);
        scanf("%d.%d.%d.%d",&b1,&b2,&b3,&b4);
        if(DecBin(d1)==b1&&DecBin(d2)==b2&&DecBin(d3)==b3&&DecBin(d4)==b4)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        printf("Case %d: No\n",i);

    }
}
