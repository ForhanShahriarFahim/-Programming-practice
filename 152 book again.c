#include<stdio.h>
int main()
{
    int twod[40][100];
    int i,j;
    for(i=0;i<40;i++)
        for(j=0;j<100;j++)
        twod[i][j]=i*j;
    for(i=0;i<40;i++)
    {
        for(j=0;j<100;j++)
            printf("%d ",twod[i][j]);
        printf("\n");

    }
    return 0;
}
