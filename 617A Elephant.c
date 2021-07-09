#include<stdio.h>
int main()
{
    int n,i,mod,div;
    scanf("%d",&n);
    if(n>=5)
    {
        div= n/5;
        mod = n%5;

    if(mod!=0)
    printf("%d",div+1);
    else
        printf("%d",div);
}
if(n<5)
    printf("1\n");
    return 0;

}

