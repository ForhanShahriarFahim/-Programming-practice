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
   int n;
   cin>>n;

   ll sum =0;
   int arr[n];
   ll s[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       s[i] = sum;

   }
   //sort(arr,arr+n);
   int q,x;
   cin>>q;
   for(int i=0;i<q;i++)
   {
       cin>>x;
       cout<<lower_bound(s,s+n,x)+1-s<<endl;
   }
}
