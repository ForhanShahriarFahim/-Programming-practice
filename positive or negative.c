#include<stdio.h>

int main()
{
    double x;
    printf("Enter number:");
    scanf("%lf",&x);
    if(x<=0)
    {
        if(x==0)
            printf("The is Zero");
        else
            printf("The number is negative");

    }else
    printf("The number is positive");

    return 0;
}
