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
   int t;
   cin>>t;
   while(t--)
   {
       ll n,s,k,x;
       cin>>n>>s>>k;
       map<int,int>mp;
       mp.clear();
       for(int i=0;i<k;i++)
       {
           cin>>x;
           mp[x]=1;
       }


        for(int i=0;;i++)
        {
            if(mp[s+i]==0 && s+i<=n || mp[s-i]==0 && s-i>=1)
            {
                cout<<i<<endl;
                break;
            }
        }
   }
}
