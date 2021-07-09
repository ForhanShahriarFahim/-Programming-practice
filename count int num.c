#include<stdio.h>

int main()
{
    long long  n;
    int count=0;
    printf("Enter the numbr:");
    scanf("%lld",&n);
    while(n>0)
    {
        n=n/10;
       count++;
    }
printf("The number :%d",count);
   return 0;
}
