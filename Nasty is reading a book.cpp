#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
    int i,n,a,k,cnt=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>a>>arr[i];
    }
    cin>>k;

    for(i=0;i<n;i++)
    {
        if(k>arr[i]) cnt++;
    }
   cout<<n-cnt<<endl;
}
