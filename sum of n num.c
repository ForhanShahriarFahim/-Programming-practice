#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("vai Enter ");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
