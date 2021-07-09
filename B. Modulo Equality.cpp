#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mod_value,cnt=0;
    scanf("%d %d",&n,&m);
    int arr[n],s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    sort(arr,arr+n);
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s[i])
        {
            cnt++;
            if(cnt==n)
            {
                printf("0\n");
                break;
            }
        }
        else if(arr[i]!=s[i])
        {
            mod_value = s[i]%m;
            if(mod_value==0)
                mod_value=10;
            printf("%d\n",mod_value-arr[i]);
            break;
        }
    }

}
