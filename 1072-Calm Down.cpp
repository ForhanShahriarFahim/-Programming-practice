#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t,i;
    double n,sine_theta,big_radious,small_radious;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&big_radious,&n);
        small_radious = (big_radious*sin(pi/n))/(1+sin(pi/n));
        printf("Case %d: %.10lf\n",i,small_radious);
    }
}
