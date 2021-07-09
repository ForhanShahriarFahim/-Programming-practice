//anther approach
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
   ll n,k,res;
   cin>>n;
   for(int i=1;i<=1e5;i++)
   {
       k = (pow(2,i)-1)*pow(2,i-1);
       if(n%k==0)
        res = k;

   }
   cout<<res<<endl;

}