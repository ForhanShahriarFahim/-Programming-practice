#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("%d\n",i);
        if(i%5==0)
        printf("\n");
    }


    return 0;

}
