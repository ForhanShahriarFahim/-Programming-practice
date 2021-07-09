#include<stdio.h>
int main()
{
    int i,a,sum;
    printf("Enter a num");
    scanf("%d",&a);
    sum=0;
    for(i=1;i<=100;i+=2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
