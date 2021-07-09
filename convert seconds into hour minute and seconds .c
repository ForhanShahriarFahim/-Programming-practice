#include<stdio.h>

int main()
{
    int h,m,s,sec;
    printf("Enter the seconds :");
    scanf("%d",&sec);
    h=sec /3600;
    m=(sec-(h*3600))/60;
    s=(sec-(h*3600)-(m*60));
    printf("H:M:S- %d:%d:%d\n",h,m,s);
    return 0;
}
