#include<stdio.h>
int main()
{
    int answer,count;
    for(count=1;count<11;count++){
        printf("What is %d+%d?",count,count);
    scanf("%d",&answer);
    if(answer== count+count)
        printf("Right ");

    else
        printf("The ans is %d%d \n",count ,count);
    }



    return 0;
}
