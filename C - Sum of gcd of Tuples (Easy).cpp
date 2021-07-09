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
   ll sum=0;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           for(int k=1;k<=n;k++)
           {
               //cout<<i<<" "<<j<<" "<<k<<endl;
               sum+=__gcd(i,__gcd(j,k));
           }
       }
   }
   cout<<sum<<endl;
   return 0;
}
