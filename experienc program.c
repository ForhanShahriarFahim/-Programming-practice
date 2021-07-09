#include<stdio.h>
int main()
{
    int i,j,k;
    for(k=0;k<2;k++)//Use increment operator
    {
        printf("Enter the first num:");
        scanf("%d",&i);
        printf("Enter the second num:");
        scanf("%d",&j);
        if(j)
            printf("%d\n",i/j);
        else
            printf("cannot divided by zero\n");
    }
}
