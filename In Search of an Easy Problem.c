#include<stdio.h>
int main()
{
    int n,i,count=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k==1)
       count++;
    }
    if(count>0)
        printf("HARD\n");
        else
        printf("EASY\n");

    return 0;
}
