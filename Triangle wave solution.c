#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, f, i, j, t,k,n;
    /*while(scanf("%d",&n)==1)
    {*/
        cin>>t;
        for(t=0;t<n;t++)
        {
            scanf("%d %d",&a, &f);
            for(k=0;k<f;k++)
            {

                for(i=0;i<a;i++)
                {

                    for(j=0;j<i+1;j++)
                    {
                        printf("%d",i+1);
                    }
                    printf("\n");
                }
                for(i=a;i>1;i--)
                {

                    for(j=i-1;j>0;j--)
                    {
                        printf("%d",i-1);
                    }
                    printf("\n");
                }
                 if(t!=n-1 || k!=f-1)
                       printf("\n");
            }
         }
    //}
    return 0;
}
//if(t!=n-1 || k!=f-1)
