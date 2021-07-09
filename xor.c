#include<stdio.h>
//int xor(int a,int b);
int main()
{
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    printf("p and q : %d\n",xor(p,q));
    return 0;

}
int xor(int a ,int b)
{
    return(a||b )&& !(a&&b);
}
