#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,m,j,k,x,ind1,ind2;
        char ch;
        scanf("%d%d",&n,&m);
        int arr[n+1];

        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(k=0;k<m;k++)
        {
            scanf("%d",&ch);
            getche();
        //cin>>ch;
        switch(ch)
            {
            case 'S':

                scanf("%d",&x);
                for(j=0;j<n;j++)
                {
                    arr[j]+=x;
                }
                break;

            case 'M':
                scanf("%d",&x);
                for(j=0;j<n;j++)
                {
                    arr[j]*=x;
                }
                break;

            case 'D':
                scanf("%d",&x);
                for(j=0;j<n;j++)
                {
                    arr[j]/=x;
                }
                break;

            case 'R':
                reverse(arr,arr+n);
                break;

            case 'P':
                scanf("%d%d",&ind1,&ind2);
                swap(arr[ind1],arr[ind2]);
                break;

            }

       }
       printf("Case %d:\n",i);
       for(int j=0;j<n;j++)
       {

           printf("%d",arr[j]);

           if(j!=n-1)
            printf(" ");

           else
            printf("\n");

       }
    }
}
