#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
   printf("Average value from 1 to N is: ");
    printf("%d",(n*(n+1))/(2*n));
}