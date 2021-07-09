#include<bits/stdc++.h>
using namespace std;
int sod(int n)
{
    int cnt = 1;

    for (int i=2; i<=n; i++)
        if(n%i==0)
        cnt+=i;


    return cnt;
}
int main()
{
    int n,i,c=1;
    while(scanf("%d",&n)==1 && n)
    {
        for(i=n;i>0;i--)
        {
            if(sod(i)==n)
            {
                printf("Case %d: %d\n",c++,i);
                break;
            }
        }
        if(i==0)
            printf("Case %d: -1\n",c++);
    }
    return 0;
}
