#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,arr[100],n,t;
    scanf("%d",&t);
    for(i=1;i<=n;i++)
    {
        int c=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);

        }
        for(j=0;j<n;j++)
        {
            if(arr[j]!=arr[j+1])
                c++;
        }
        if(c>0)
        printf("Case %d: %d\n",i,c-1);
        else
        printf("Case %d: %d\n",i,c);

    }
}
