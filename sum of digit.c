#include<stdio.h>
int main()
{
    int n,rem,sum=0,i;
    printf("Enter the num :");
    scanf("%d",&n);
    for(i=0;n>0;i++){

        rem=n%10;
    n=n/10;
    sum=sum+rem;
    }
    printf("%d",sum);
    return 0;

}
