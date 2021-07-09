#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,n,f,k;
    cin>>test;
    for(k=1;k<=test;k++)
    {
        int cnt=0;

        long long int sum=0;
        cin>>n>>f;
        int arr[f];
        for(i=0;i<f;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+f);
        /*for(i=0;i<f;i++)
            cout<<arr[i]<<" ";*/
        for(i=f-1;i>=0;i--)
        {
            cnt++;
            sum+=arr[i];
            if(sum>=n)
            {
                printf("Scenario #%d:\n",k);
                printf("%d\n",cnt);
                printf("\n");
                break;
            }

        }
        if(sum<n)
        {
        printf("Scenario #%d:\n",k);
        printf("impossible\n");
        printf("\n");
        }

    }

}
