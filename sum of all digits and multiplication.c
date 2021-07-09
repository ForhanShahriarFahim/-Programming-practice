#include<stdio.h>
int main()
{
    int n,rem,sum=0,mul=1,i;
    printf("Enter a num :");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        mul=mul*rem;

    }
    printf(" ********\n");
    printf(" *\n");
    printf(" *\n");
    printf(" *\n");
    printf(" ******\n");
    printf(" *\n");
    printf(" *\n");
    printf(" *\n");
    printf(" *\n");
    printf(" *\n");

    printf("%d\n",sum);
    printf("%d\n",mul);
    return 0;
}
