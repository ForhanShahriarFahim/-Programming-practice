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
   ll n,a,b,c,ans=0;
   cin>>n>>a>>b>>c;
   for(int i=0;i*a<=n;i++)
   {
       for(int j=0;i*a+j*b<=n;j++)
       {
           if(((n-(i*a+j*b))%c)==0)
           {
               ans = max(ans,i+j+(n-(i*a+j*b))/c);
           }
       }
   }
   cout<<ans<<endl;
}
