#include<stdio.h>
int main(void)
{
    int i,j,total=0;
    do
    {
        printf("Enter next number:\n");
        scanf("%d",&i);
        printf("Enter the num again:\n");
        scanf("%d",&j);
        //if(i!=j){
          //  printf("Mismatch\n");
          //  continue;
       // }
    total=total+i;
    }while(i);
    printf("Total is:%d\n",total);

}
