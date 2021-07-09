#include<stdio.h>
int main()
{
    int a[10],i,j,n,s;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;

            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
