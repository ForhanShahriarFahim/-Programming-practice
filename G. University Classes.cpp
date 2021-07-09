#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
//#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n,cnt=0,mx=0;
    cin>>n;
   string arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int j=0;j<7;j++)
   {
       for(int i=0;i<n;i++)
       {
           if(arr[i][j]=='1')
            cnt++;
       }
       mx = max(cnt,mx);
       cnt=0;
   }
   cout<<mx<<endl;
}
