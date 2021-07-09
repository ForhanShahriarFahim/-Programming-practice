#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter array num : \n");
    scanf("%d",&n);
    printf("Enter the element one by one :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("The inputed array is :\n");
        for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Reverse of the array is :\n");
            for(i=0;i<n;i++)

    printf("%d\n",a[i]);
}
