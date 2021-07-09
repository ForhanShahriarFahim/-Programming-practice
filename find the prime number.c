#include<stdio.h>
int main()
{
    int i, n,count=0;
    printf("Enter any positive num");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       if( n%i==0){
        count++;
        break;
        }
    }
    if(count==0){
        printf("%d is a prime num",n);
        }



   else
    printf("%d is not a prime num",n);
  if(n==1)
        printf("Not prime not anything");

return 0;
    }



