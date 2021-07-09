#include<stdio.h>
int main()
{
    int arr[100],n,mid,hi,lo,flag=1,i,find;
    printf("No of elements in array: ");
    scanf("%d",&n);
    printf("Enter the array elements in assending order: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the elemet to find: ");
    scanf("%d",&find);
    lo=0;
    hi=n-1;

    while(lo<=hi)
    {
        mid=(hi+lo)/2;
        if(find==arr[mid]){
           flag =1;
            break;
        }

        else{
            if(find>arr[mid])
            lo=mid+1;
            else
                hi=mid-1;

        }

    }
    if(flag==1)
            printf("The position of the no is %d\n",mid+1);
        else
            printf("Element not found\n");
        return 0;




}
