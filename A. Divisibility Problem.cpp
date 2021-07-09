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
   int test,a,b,mod1;
   cin>>test;

   while(test--)
   {
       cin>>a>>b;
       mod1= a%b;
       if(a>=b)
       {


       if(mod1==0)
       {
           cout<<"0"<<endl;

       }
       else
       {
           cout<<abs(b-mod1)<<endl;
       }
       }
       else
       {
           cout<<b-a<<endl;
       }

   }
   return 0;

}
