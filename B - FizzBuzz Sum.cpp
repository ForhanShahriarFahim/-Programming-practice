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
   ll sum = 0;
   for(int i=1;i<=n;i++)
   {
       if((i%3!=0 || i%5!=0) && i%3!=0 && i%5!=0)
       {
           //cout<<i<<endl;
           sum+=i;
       }

   }
   cout<<sum<<endl;
}
