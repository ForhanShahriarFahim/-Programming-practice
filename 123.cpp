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
   n++;
   int flag = 1;
   while(1)
   {
       if(n>0 && n<=9)
       {
           cnt+=9;
           break;
       }
       else if(n%10==0)
       {
           n = n/10;
       }
       else if(n%10!=0)
       {
           if(flag)
           {
               cnt++;
               flag = 0;
           }
           cnt++;
           n++;
       }

   }
   cout<<cnt<<endl;

}
