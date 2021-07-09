#include<stdio.h>
int main()
{
    int answer ,count;
    int write, wrong;
    right=0;
    wrong=0;
    for(count=1;count<11;count++)
    {
        printf("What is %d+%d ",count,count);
        scanf("%d",&answer);
        if(answer==count+count)
        {
            printf("Right");
            right++
        }
        else
            {
            printf("Sorry we are wrong");
        printf("The answer is wrong");
        printf("The answer is %d",count+count);
        }
    }
    printf("You got %d right and %d is wrong",write,wrong);
    return0 ;
