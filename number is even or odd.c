#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x%2==0)
        printf("%d is a even num",x);
    else
        printf("%d is a odd num",x);
    return 0;
}
