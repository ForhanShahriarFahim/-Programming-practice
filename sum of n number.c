#include<stdio.h>
int main()
{


    int ar[8],i,n,sum;
    printf("Enter:");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", & ar[i]);
        sum=sum+ar[i];

    }        printf("%d",sum);

    return 0;
}
