
#include<stdio.h>
int main()
{
    int A[10][10];
    int C[10][10];
    int i,j,NoOfRows,NoOfCols;
    printf("Enter the no of rows and cols : \n");
    scanf("%d %d",&NoOfRows,&NoOfCols);

    printf("Enter the elements of A matrix :\n");
    //scanning A matrix
    for(i=0;i<NoOfRows;i++)
    {
        for(j=0;j<NoOfCols;j++){
           printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j] );
        }
        printf("\n");
    }
        int B[10][10];

    //scanning B matrix
    printf("\nEnter the elements of B matrix :\n");
    for(i=0;i<NoOfRows;i++)
    {
        for(j=0;j<NoOfCols;j++){
           printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j] );
        }
        printf("\n");
    }
    //printing A matrix
    printf("A = ");
    for(i=0;i<NoOfRows;i++)
    {
        printf("\t");
        for(j=0;j<NoOfCols;j++){
        printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //printing B matrix
    printf("\nB = ");
    for(i=0;i<NoOfRows;i++)
    {
        printf("\t");
        for(j=0;j<NoOfCols;j++){
        printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Adding two matrix
    printf("\nA + B=");
    for(i=0;i<NoOfRows;i++)
    {
        printf("\t");
        for(j=0;j<NoOfCols;j++){
        printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
