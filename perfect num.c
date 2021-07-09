#include<stdio.h>
int main()
{
    int i,j,n,rem,sum=0;
    printf("Enter a num: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
           sum=sum+i;
}

        }if(sum==n)
           printf("The num is a proper num");
           else
    printf("The number is not proper");
    }


