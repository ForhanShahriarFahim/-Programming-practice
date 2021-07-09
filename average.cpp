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
   int test,n,m,ans,sum;
        cin>>test;
        while(test--)
        {
            cin>>n>>m;
            int arr[n];
            sum=0;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                sum+=arr[i];
            }
            if(sum>=m)
                cout<<m<<endl;
            else cout<<sum<<endl;
        }
}
