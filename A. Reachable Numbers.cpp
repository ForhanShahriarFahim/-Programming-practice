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
   ll cnt=0;

  // int flag = 1;
   while(n>0)
   {

       if(n<10)
       {
           cnt+=9;
           break;
       }
       else
       {
           n++;
           cnt++;
           if(n%10==0)
           {
               while(n%10==0)
               {
                   n/=10;
               }
           }
       }

   }
   cout<<cnt<<endl;

}
