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
   ll n;
   cin>>n;
   ll arr[n],str[n],c[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
   for(int i=0;i<n-1;i++)
    cin>>str[i];
    for(int i=0;i<n-2;i++)
     cin>>c[i];
     sort(arr,arr+n);
     sort(str,str+(n-1));
     sort(c,c+(n-2));
     for(int i=0;i<n;i++)
     {
         if(arr[i]!=str[i])
         {
             cout<<arr[i]<<endl;
             break;
         }
     }
     for(int i=0;i<n;i++)
     {
         if(str[i]!=c[i])
         {
             cout<<str[i]<<endl;
             break;
         }
     }
     return 0;

}
