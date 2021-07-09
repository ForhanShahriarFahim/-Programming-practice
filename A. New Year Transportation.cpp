#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
   int n,t;
   cin>>n>>t;
   int arr[n];
   for(int i=1;i<n;i++)
   {
       cin>>arr[i];
   }
   int checker =0;
   for(int i=1;i<=n;i+=arr[i])
   {
      // cout<<"value of i :"<<i<<endl;


       if(i==t)
       {
           checker =1;
           break;
       }
   }
   if(checker)
    cout<<"YES";
   else
   cout<<"NO";
   return 0;
}
