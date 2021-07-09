#include<stdio.h>
#include<conio.h>
 void main()
{
    int i=1 , n, sum=0;
    printf("Enter num:");
    scanf("%d",&n);
    while(i<=n)
    {
        i++;
        sum=sum+i*i;
    }
    printf("%d",sum);
getch();
}
