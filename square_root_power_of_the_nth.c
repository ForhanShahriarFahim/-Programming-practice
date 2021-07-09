#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,roll;
    printf("Enter the last 3 digits of your roll no: ");
    scanf("%d",&roll);
    printf("Enter the value of nth power: ");
    scanf("%d",&n);
    printf("Square  Cube  Power  Square Root\n");
    printf("%d\t %ld\t %lf\t %.2f\n",(roll*roll),(roll*roll*roll),pow(roll,n),sqrt(roll));
}