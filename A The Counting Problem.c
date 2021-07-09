#include<stdio.h>
int main()
{
    int a,b,i;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            for(i=a;i<=b;i++)
                printf("%d ",i);
        }
    }
}
