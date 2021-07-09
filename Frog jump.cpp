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
   int n;
   string s;
   cin>>n>>s;
   int r=0,g=0,b=0,cnt=0,ans=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='R') r++;
       if(s[i]=='G') g++;
       if(s[i]=='B') b++;
   }
   ans = r*g*b;
   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(j-i<0 || j+i>=n) continue;
           if(s[j]!=s[j-i] && s[j]!=s[j+i] && s[j-i]!=s[j+i])
            ans--;
       }

   }
   cout<<ans<<endl;
}
