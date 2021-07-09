#include<stdio.h>
int main()
{
    int n,search,i,a[5],j;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a num to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            printf("%d is located in %d\n",search,i+1);
            break;

        }
        }if(i==n)
        printf("%d is not located in the array",search);


    return 0;

}
