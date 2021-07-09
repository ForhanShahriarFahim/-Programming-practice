#include<stdio.h>
int main()
{
    int b[2],a[2],n,i,j,count=0;
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
        n=a[i];
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                count=count+j;
            }

        }
        //printf("%d\n",count);
     //   for(j=0;j<2;j++)
      //  {
       //     b[j]=count;
       // }
        count=0;
    }
    for(j=0;j<2;j++)
    {
        printf("%d\n",b[j]);
    }
}

