#include<stdio.h>

int main()
{
    int year,month,day;
    printf("Enter year or month or day=");
    scanf("%d%d%d",&year,&month,&day);
    printf("Year or month or day is %d",year*month*day*60*60*60);
    return 0;
}
