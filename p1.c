#include<stdio.h>
int main()
{
    unsigned long long int  i,n,sum1=0,sum2=0;
    scanf("%lld",&n);
    //printf("%lld",n);
   for(i=1;i<=n;i++)
    {
     if(n%2==0)
        {sum2=sum2+i;}
     else
      sum1=sum1+i;
    }

    printf("%lld\n",sum2-sum1);
    return 0;
}
