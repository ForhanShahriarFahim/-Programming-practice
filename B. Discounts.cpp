//You can never be better unless you challange yourself
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    //scanf("%lld",&n);
    cin>>n;
    long long int arr[n],total=0;
    for(int i=0;i<n;i++)
    {
       // scanf("%lld",&arr[i]);
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr,arr+n,greater<int>());

    long long int m;
    //scanf("%lld",&m);
    cin>>m;
    long long int q[m];
    for(int i=0;i<m;i++)
    {
        cin>>q[i];
        //scanf("%lld",&q);

       // sum = accumulate(arr,arr+(q-1),sum);
        //cout<<sum<<endl;
        //temp=accumulate(arr+q,arr+n,temp);
        //cout<<sum+temp<<endl;


    }
    long long int ans;
    for(int i=0;i<m;i++)
    {
        ans = total - arr[q[i]-1];
        cout<<ans<<endl;
    }
}
