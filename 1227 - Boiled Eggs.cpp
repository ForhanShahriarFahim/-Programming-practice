#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0,arr[11],j,n,p,q,t,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int index = 0;
        sum = 0;
        scanf("%d %d %d",&n,&p,&q);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
           // printf("%d ",arr[j]);
        }
        for(k=0;k<n;k++)
        {
            /*if(arr[k]<=q&&sum<=q)
            {
                sum +=arr[k];
                index = k+1;
                if((arr[k]+arr[k+1])>q)
                {
                    index = k+1;
                    break;
                }*/
                sum+=arr[k];
                if(sum<=q&&index<p)
                    index++;


        }


        printf("Case %d: %d\n",i,index);
    }
}
