#include<stdio.h>
int main()
{
    long long int n,a;
    scanf("%lld",&n);
    if(n%4==0)
    {
        a=(n/4)-1;
        printf("%lld",a);
        return 0;
    }
     else if(n%4==1||n%4==3)
    {
        printf("0\n");
        return 0;
    }
    else if(n%4!=0)
    {
        a=n/4;
        printf("%lld",a);
        return 0;
    }

}
