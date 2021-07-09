#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    bool arr[n+1];
    for(i=2;i*i<=n;i++)
    {
        if(!arr[i])
        {
            for(j=i*i;j<=n;j+=i)
            {
                arr[j]=true;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(arr[i]==false)
            printf("%d ",i);
    }
}
