#include<stdio.h>
int main()
{
    int a1[10],a2[10],i,e[10],j;
    printf("Enter some no in the a1 array: \n");
    for(i=0;i<10;i++)
        scanf("%d",&a1[i]);
    for(i=9,j=0;i>=0;i--,j++)
    {
        e[j]=a1[i];

    }
    printf("Here the reverse array: \n");
    for(i=0;i<10;i++)
    {
        a2[i]=e[i];
        printf("%d\t",a2[i]);
    }

}
