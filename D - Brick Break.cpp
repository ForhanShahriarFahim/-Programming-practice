#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int arr[n];
    int check=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==check)
        {
            cnt++;
            check++;
        }
    }
    if(n==1&&cnt==1)
        printf("0\n");
    else if(cnt==0)
            printf("-1\n");
    else
        printf("%d\n",n-cnt);
    return 0;
}
