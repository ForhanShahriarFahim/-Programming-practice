#include<stdio.h>

int main()
{
    int number,i;
    scanf("%d",&number);
    for(i=number;i>0;i=i/10)
        printf("%d",(i%10));
    return 0;
}

