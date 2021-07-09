#include<stdio.h>
int xor(int a, int b);
int main()
{
    int p,q;
    printf("Enter p (0 or 1)");
    scanf("%d",& p);
    printf("Enter q (0 or 1)");
    scanf("%d", & q);
    printf("p xor Q : %d\n",xor(p,q));

    return 0;
}
int xor(int a, int b)
{
    return(a||b )&& !(a&&b);
}
