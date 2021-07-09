#include<stdio.h>

int main()
{
    long long int i, b,e;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&b,&e);
        if(b>0 && e== 0)
            printf("1\n");
        else{
            long long ans =1;

            while(e--)
            {
                ans = (ans*b)%10;

            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
