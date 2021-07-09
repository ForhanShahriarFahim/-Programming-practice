#include<stdio.h>
int main()
{
    int i,reaminder=0,n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n!=0)
    {
        reaminder=reaminder*10;
        reaminder=reaminder+n%10;
        n=n/10;
    }
    printf("Reverse number is %d :",reaminder);
}
