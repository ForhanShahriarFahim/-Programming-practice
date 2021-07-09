#include<stdio.h>
int main()
{
    int i,n,temp,ar[100],j;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)

        scanf("%d",&ar[i]);


    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
            }

        }
    }
    printf("The sorted order list : \n");
    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}
