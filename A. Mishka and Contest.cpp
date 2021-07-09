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
   int n,k;
   cin>>n>>k;
   int arr[n];
   int s[n+3]={0};
   for(int i=0;i<n;i++)
    cin>>arr[i];
    int cnt=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]<=k&&s[i]==0)
       {
           cnt++;
           s[i]=1;
       }
       else
          break;
   }
  for(int j=n-1;j>=0;j--)
   {
       if(arr[j]<=k&&s[j]==0)
       {
           cnt++;
           s[j]=1;
       }
       else
        break;
   }
   cout<<cnt<<endl;
   return 0;
}

