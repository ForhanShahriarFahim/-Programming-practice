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
   int test;
   cin>>test;
   while(test--)
   {
       int n,k;
       cin>>n>>k;
       int rem = n%k;
       if(rem>k/2)
       {
           rem = k/2;
       }
       cout<<rem+(n/k)*k<<endl;

   }
   return 0;

}
