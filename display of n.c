#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter m :");
    scanf("%d",&m);

    if(m!=0)
        if(m>0)
        n=1;
     else
        n=-1;

    else
        n=0;

    printf("%d the value of m is :\n",m);
    printf("%d the value of n is: ",n);
    return 0;

}
