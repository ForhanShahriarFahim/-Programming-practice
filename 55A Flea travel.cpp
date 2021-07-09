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
   while(n%2==0)
   {
       n/=2;
   }
   if(n==1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
   return 0;
}
