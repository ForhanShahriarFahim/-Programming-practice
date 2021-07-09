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
   int n,m;
   cin>>n>>m;
   set<string>st;
   string str,t,ans = "",rev = "", mid = "";
   while(n--)
   {
       cin>>str;
       t = str;
       reverse(t.begin(),t.end());
       if(str==t)
       {
           mid = t;
       }
       else if(st.count(t))
       {
           ans+=t;
           rev = str+rev;
       }
       st.insert(str);
   }
   ans = ans+mid+rev;
   cout<<ans.size()<<"\n"<<ans<<endl;
}
