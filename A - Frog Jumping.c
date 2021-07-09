#include<stdio.h>
int main()
{
    long long int a,b,c,k,x,m=0,n=0,num,i;
    scanf("%lld",&k);
    for(i=0;i<k;i++)
    {
        scanf("%lld %lld %lld",&a, &b, &c);
        x= c/2;
        m=a*x;
        n=x*b;
        num=m-n;


    if(n%2==0)
        printf("%lld\n",num);
    else
        printf("%lld\n",num+a);
    }
    return 0;
}
