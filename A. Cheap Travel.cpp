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
   int n,m;
   int a,b,mod1,ans,price,sum,special,temp,partial;
   cin>>n>>m>>a>>b;
   if(n>=m)
   {
     //  temp = ceil(n/m);
    //   price = temp*b;
      // sum = n*a;
       mod1 = n%m;
       if(mod1==0)
       {
           special = n/m;
           price = special*b;
        }
        else
        {
            special = (n/m);
            partial = min(mod1*a,b);

            price = (special*b)+partial;
        }
        sum = a*n;
        cout<<min(sum,price);

   }
   else
   {
       sum = a*n;
       cout<<min(sum,b);
   }
}
