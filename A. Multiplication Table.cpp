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
   ll n,x,ans,cnt=0;
   cin>>n>>x;
   for(int i=1;i<=n;i++)
   {
       if(x%i==0&&x/i<=n) //x appear in col only 1
    {
       // cout<<i <<" " <<x<<endl;

        cnt++;
   }
   }
   cout<<cnt<<endl;



}
