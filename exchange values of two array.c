#include<stdio.h>
int main()
{
    int a1[10],a2[10],i,e[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a1[i]);

    }
    for(i=0;i<10;i++)
    {

        e[i]=a1[i];
        a2[i]=e[i];
    }
    for(i=0;i<10;i++)
    {
        a2[i]=e[i];
    }
    for(i=0;i<10;i++)
        printf("%d\n",a2[i]);
}
