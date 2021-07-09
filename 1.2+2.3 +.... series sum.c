#include<stdio.h>
int main()
{
    int n,sum, i ;
    printf("Enter the last num : ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1);

    }
    printf("%d",sum);
    return 0;

}
