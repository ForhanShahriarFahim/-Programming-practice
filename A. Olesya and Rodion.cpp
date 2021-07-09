//🐀򐀀🐀򐀀
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
   int n,t;
   cin>>n>>t;
   if(t==10 && n==1)
   {
       cout<<-1;
       return 0;
   }
   string s;
   if(t==10)
   {
       n--;
       s+='1';//first element
       t = 0;
   }
   for(int i=0;i<n;i++)
   {
       s+=(t+'0');
   }
   cout<<s<<endl;
   return 0;
}
