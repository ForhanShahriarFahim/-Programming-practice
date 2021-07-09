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
   ll test,n,x,arr[250],a;
   cin>>test;

   while(test--)
   {
       memset(arr,0,sizeof(arr));
       ll cnt = 0;
       cin>>n>>x;

       for(int i=0;i<n;i++)
       {
           cin>>a;
           arr[a] = 1;
       }
       for(int i=1;;i++)
       {
           if(arr[i]==0)
           {
              arr[i] = 1;
              cnt++;
           }
           if(cnt>x)
           {
               cout<<i-1<<endl;
               break;
           }

       }

   }
}
