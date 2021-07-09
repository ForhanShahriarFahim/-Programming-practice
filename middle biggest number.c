#include<stdio.h>
int main()
{
    int x,y,z,m;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && y>z|| z>y && y>x){
    printf("%d is the middle number ",y);
    }
    else if(y>x && x>z|| z>x && x>y )
printf("%d is the middle num ",x);
    else
        printf("%d is the middle num",z);

    return 0;

}
