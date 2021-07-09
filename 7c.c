#include<stdio.h>
int main()
{
    int a,b,c,x=10,d;
    b=++x;
    c=b--;
    a=--b+a++;
    d=d++;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

}
