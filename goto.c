#include<stdio.h>
#include<conio.h>
main()
{
    int a,x;
    long fact=1;
    x1-:
        printf("\n Type the positive intiger");
        scanf("%d",&x);
        if(x<0)
        {
            printf("\nNegative number not allowed");
            goto x1;

        }
        else if(x==0)
            printf("\nFactorial=1");
        else
        {
            for(a=2;a<=x;a++)
                fact=fact*a;
            printf("\nFactorial=%d",fact);
        }
        getch();
}
