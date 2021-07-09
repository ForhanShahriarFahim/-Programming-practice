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
   int n,a,b,c,ans=0,p,x,y,z,i,j,k;
   cin>>n>>a>>b>>c;
   p = min(a,min(b,c));
   x = n/p;
   for(i = x;i>=0;i--)
   {
       for(j=0;j<=x;j++)
       {
           k = abs((n-(i*a+j*b))/c);
           if(i*a+j*b+k*c==n)
           {
               ans = max(ans,i+j+k);

           }

       }
   }
       cout<<ans<<endl;


}
