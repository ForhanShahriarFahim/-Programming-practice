#include<stdio.h>
int main()
{
    long long int n,c,r,c1,c2,c3,c4,a,b;
    scanf("%lld%lld%lld",&n,&r,&c);
    c1=r-1;
    c2=c-1;
    c3=n-r;
    c4=n-c;
    a=c1+c2;
    b=c3+c4;
    if(a<=b)
    {
        printf("White");
    }
    else
    {
        printf("Black");
    }
    return 0;
}
