/*Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40*/
#include<stdio.h>
int main()
{
    int h,m,s,n,r;
    printf("Enter the total seconds:");
    scanf("%d",&n);
    h=n/3600;
    r=n%3600;
    m=r/60;
    r=n%3600%60;
   //s=r/60;

   // s=
    printf("H:m:s -%d:%d:%d",h,m,r);
    return 0;

}
