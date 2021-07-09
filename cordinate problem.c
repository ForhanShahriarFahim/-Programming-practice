#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y :");
    scanf("%d  %d",&x,&y);

    if(x>0 && y>0)
        printf("1st qudrant");
    else if (x<0&&y>0)
        printf("2nd quadrant");
    else if (x<0&&y<0)
        printf("3rd quadrant");
    else if (x>0&&y<0)
        printf("4 th quadrant");
    else if (x==0 && y==0)
        printf("It is main point");
    return 0;
}
