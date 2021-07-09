#include<stdio.h>
int main()
{
    int matrix[10][10];
    int r,c,i,j;
    printf("Enter r and c :\n");
    scanf("%d %d",&r,&c);
    printf("Enter the marix elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element [%d,%d] :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
