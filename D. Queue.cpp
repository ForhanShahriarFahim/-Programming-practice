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
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   int cnt=0;
   ll time = arr[0];
   for(int i=1;i<n;i++)
   {
       if(time>arr[i])
       {
           cnt++;
       }
       else
       {
           time+=arr[i];
       }
   }
   cout<<n-cnt<<endl;

}
