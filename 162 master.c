#include<stdio.h>
int main()
{
    int stats[200], i ,j;
    int mode,count,oldcount,oldmode;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",& stats[i]);
    oldcount=0;
    for(i=0;i<5;i++)
    {
        mode=stats[i];
        count=1;
        for(j=i+1;j<5;j++)
            if(mode==stats[j])
            count++;
        if(count>oldcount)
        {
            oldmode=mode;
            oldcount=count;
        }
    }
    printf("The mode is %d\n",oldmode);
    return 0;

}
