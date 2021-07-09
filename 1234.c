#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int b,e;
        scanf("%lld%lld",&b,&e);
        if(b==0&&e==0)
        {
            printf("1\n");
        }
        else
        {
            long long int d=1;
            long long int i;
            for(i=1;i<=e;i++)
            {
                d=(b*d)%10;
            }
            printf("%lld\n",d);
        }
    }
    return 0;
}
