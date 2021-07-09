#include<stdio.h>
int main()
{
    int data[4]={5,8,1,6},n,i,j,temp;
    for(i=0;i<n;i++){
            scanf("%d",&data[i]);
        j=i;
        while(j>0 && data[j]<data[j-1]);
        {
            temp=data[j];
            data [j]=data [j-1];
            data [j-1]=temp;
            j--;
        }
    }
    printf("In assending order:");
    for(i=0;i<n;i++)
    {
        printf("%d",data[i]);
    }


}
