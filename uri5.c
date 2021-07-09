#include<stdio.h>

int main()
{
    double A,B,C,avg;

    scanf("%lf%lf%lf",&A,&B,&C);


    avg=((A/10*2)+(B/10*3)+(C/10*5))/(2+3+5);
    printf("MEDIA = .1%lf\n",avg);
   return 0;
}
