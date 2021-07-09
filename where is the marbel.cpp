#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,check,j,arr[10001],b[10001],line=0;
    while(scanf("%d%d",&n,&q)==2)
    {
        if(n==0&&q==0) break;

        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<q;i++)
            cin>>b[i];

        sort(arr,arr+n);

        printf("CASE# %d:\n",++line);
        for(i=0;i<q;i++)
        {
                check=0;
            for(j=0;j<n;j++)
            {
                if(b[i]==arr[j]&&check!=1)
                {
                   printf("%d found at %d\n",b[i],j+1);
                   check=1;
                }
            }
            if(check==0)
                printf("%d not found\n",b[i]);
        }
    }
}
