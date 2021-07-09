#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,n,m,c,t;
    long long int sum;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        p=1;
        sum = 0;
        scanf("%d %d",&n,&m);
        l = n/m;
        c = m;
        for(i=0;i<l;i++)
        {
            if(i%2==0)
            {
                for(j=p;j<=m;j++)
                {
                    //printf("%d\n",j);
                    sum = sum - j;
                }
               // printf("sum is : %lld\n\n",sum);
                m+=c;
                //printf("value of m is :%d\n",m);
            }
            else
            {
                for(p=j;p<=m;p++)
                {
                    //printf("%d\n",p);
                    sum= sum+p;
                }
                    //printf("sum is : %lld\n\n",sum);
                    m +=c;
                    //printf("value of m is :%d\n",m);
            }
        }
        printf("Case %d: %lld\n",k,sum);
    }
}
