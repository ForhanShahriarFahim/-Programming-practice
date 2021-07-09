#include<stdio.h>
void sum(int x,int y);
int main(void)
{
    sum(10-2,9*7);
    return 0;
}
void sum(int x, int y)
{
    printf("%d\n%d",x,y);
}
