#include<stdio.h>
void sum(int x ,int y);
int main(void)
{
    sum(68,68);
    sum(8935,34345);
    return 0;

}
void sum(int x,int y )
{
    printf("%d\n",x-y);
}
