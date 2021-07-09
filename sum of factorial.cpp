#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[21]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
    int a[23],i,j,t;
    long long n;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int c=0,d=0;
        scanf("%lld",&n);
        for(i=20;i>=0;i--)
        {
            if(n==arr[i])
            {
                a[c++]=i;
                d=1;
                break;
            }
            else if(n>arr[i])
            {
                a[c++]=i;
                n = n-arr[i];
            }
        }
      if(d==0)
        printf("Case %d: impossible\n",j);
      else
      {
         printf("Case %d: %d!",j,a[c-1]);
         for(i=c-2;i>=0;i--)
            printf("+%d!",a[i]);
         printf("\n");
      }
    }

}
