#include<stdio.h>
int main()
{
    int a,*p,**m;
    p=&a;
    m=&p;
    **m=520;
    printf("%d ,%d, %d",&a,*p,**m);
}
