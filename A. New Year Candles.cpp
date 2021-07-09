#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
   int a,b,cont=0,sum = 0,n,temp,rem;
   cin>>a>>b;
   temp=a;
   while(a>=b)
   {
       n =a/b;
       rem = a%b;
       a=n+rem;
       sum+=n;

   }
   cout<<(temp+sum)<<endl;
}


