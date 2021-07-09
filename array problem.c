#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d%d",&a,&b,&c);
    int arr[] ={(a+b+c),(a*b*c)};
    for(i= 0;i<2;i++)
    {
        printf("%d\n",arr[i]);
    }


    return 0;
}

