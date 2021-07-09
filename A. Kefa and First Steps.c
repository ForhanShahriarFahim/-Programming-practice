#include<stdio.h>

int main()
{
    int i,n,count =0, max =1;
    scanf("%d",&n);
    int arr[10000];
    for(i = 1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]<=arr[i+1])
            count++;
        else
            count = 1;
        if(max<count)
            max = count;
    }
    printf("%d\n",max);
    return 0;
}
