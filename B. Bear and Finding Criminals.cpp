#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,cnt=0;
    cin>>n>>a;
    int arr[n]={0};
    int i,j;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    --a;
    if(arr[a])
        cnt++;

    for(int i=1;i<n;i++)
    {
        int right,left;
        right = a+i;
        left = a-i;
        if(left>=0||right<n)
        {
            if(left>=0&&right<n)
            {
                if(arr[right]&&arr[left])
                    cnt+=2;
            }
            else if(left>=0){
                if(arr[left])
                    cnt++;

            }
            else if(right<n){
				 if(arr[right])
                    cnt++;
			 }
        }
    }
    cout<<cnt;
    return 0;
}
