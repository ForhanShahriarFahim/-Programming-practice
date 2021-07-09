#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;

        }

    }
        if(num==1)
            printf("Not prime non composite");
        else
        {
            if(count==0)
            printf("Prime");
            else
                printf("Not prime");
         }




}
