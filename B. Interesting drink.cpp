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
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   ll q;
   cin>>q;
   ll a;
   for(int j=0;j<q;j++)
   {
       cin>>a;
       ll cnt=0;
       for(int i=0;i<n;i++)
       {
           if(arr[n-1]<a)
           {
               cnt++;
           }

           else if(a>=arr[i])
            cnt++;
       }
       cout<<cnt<<endl;
   }
}
