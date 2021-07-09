#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    double a,b;
    double r,theta,s,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%lf %lf",&a,&b);

        r = sqrt(b*b+a*a)/2.0;

        theta = acos((r*r+r*r-b*b)/(2.0*r*r));
        s = r*theta;
        x = 400.0/(2.0*s+2.0*a);
        printf("Case %d: %.10lf %.10lf\n",i,a*x,b*x);
    }
    return 0;
}
