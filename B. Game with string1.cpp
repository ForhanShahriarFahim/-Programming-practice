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
   string s;
   cin>>s;
   int n = s.size();
   vector<int>v;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       v.pb(s[i]);
       if(v.size()>1)
       {
           if(v[v.size()-1]==v[v.size()-2])
           {
               v.pop_back();
               v.pop_back();
               cnt++;
           }
       }
   }
   if(cnt%2)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
