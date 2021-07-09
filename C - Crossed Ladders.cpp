#include<bits/stdc++.h>
using namespace std;
double x,y,h;

double f(double mid)
{

    double h1 = sqrt((x*x)-(mid*mid));
    double h2 = sqrt((y*y)-(mid*mid));

    return (h1*h2)/(h1+h2);
}
int main()
{
   int t,i;
   cin>>t;
   for(i=1;i<=t;i++)
   {
      double mid;
      cin>>x>>y>>h;
      double lo = 0.0, hi = min(x,y);

      int loop = 50;
      while(loop--)
      {
          mid = (lo+hi)/2.0;
          if(f(mid)<=h)
          {
              hi = mid;
          }
          else
            lo = mid;
      }
      printf("Case %d: %.11lf\n",i,lo);

   }

}
