#include<stdio.h>
int main()
{
    int a[20],n,i,j,count=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        n=a[i];}
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                count=count+j;
            }

        }
        printf("%d\n",count);

}
