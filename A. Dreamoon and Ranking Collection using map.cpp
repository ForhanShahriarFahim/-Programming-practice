//using map
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
   ll test,n,x,a;
   cin>>test;
   while(test--)
   {
       ll cnt=0;
       cin>>n>>x;

       map<int,int>mp;
       mp.clear();
       for(int i=0;i<n;i++)
       {
           cin>>a;
           mp[a]=1;
       }
       for(int i=1;;i++)
       {
           if(mp[i]==0)
           {
               mp[i]=1;
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
