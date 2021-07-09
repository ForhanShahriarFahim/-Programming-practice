#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int d,sum = 0;
        //string st;
        char arr[10];
        scanf("%d",&n);
        printf("Case %d:\n",i);
        while(n--)
        {
            scanf("%s",arr);
            if(arr[0]=='d')
            {
                scanf("%d",&d);
                sum+=d;
            }
            else
            {
                printf("%d\n",sum);
            }
        }
    }
}
