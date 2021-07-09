#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i+2)
    {
        sum1=sum1+i;

    }
    printf("%d",sum1);
   /* int j,sum2=0;
for(j=2;j<=n;j+2)
    {
        sum2=sum2+j;
        printf("%d",sum2);
    }*/
   /* sum=sum2-sum1;
    printf("%d\n",sum);*/
    return 0;

}
