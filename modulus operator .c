#include<stdio.h>

int main()
{
    int count,num,val;
    float x;

    printf("Enter the values");
    scanf("%d%d%d",&count,&num,&val);
    x=(count*num) + (88/val)-(19%count);
    printf("%.1f",x);
    return 0;
}
