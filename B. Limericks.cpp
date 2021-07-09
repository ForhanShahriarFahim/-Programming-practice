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
   int a;
   cin>>a;
   int res;
   for(int i=2;i<=998;i++)
   {
       if(a%i==0)
       {
           cout<<min(i,a/i);
           cout<<max(i,a/i);
           return 0;
       }
   }
}
