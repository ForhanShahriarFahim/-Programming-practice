#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846
int main()
{
    int t,i;
    double r1,r2,r,h,p,x,result;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        x = (r2*h)/(r1-r2);
        //printf("%lf\n",x);
        r= (r2*(p+x))/x;
       // printf("%lf\n",r);
        result = (pi*(((r*r)*p)+x*(r*r-r2*r2)))/3;
        printf("Case %d: %.9lf\n",i,result);
    }
}
