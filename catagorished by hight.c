#include<stdio.h>
int main()
{
    int h;
    printf("Enter h [note :The range should be 125 avove] :");
    scanf("%d",&h);
    if(h<=135&&h>=125)
        printf("Dwaft");
        else if(h>135&&h<155)
        printf("Medium");
    else
        printf("High");
    return 0;
}
