#include <bits/stdc++.h>
typedef long long ll;
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
   string s;
   cin>>s;

   int n = s.size();
   int cnt=0;
   int arr[n]={0};
   for(int i=1;i<=n;i++)
   {
      if(s[i]==s[i-1])
      {
          cnt++;
      }
      arr[i] = cnt;
     // cout<<cnt<<endl;
   }
   int q,l,r;
   cin>>q;
   for(int i=0;i<q;i++)
   {
      cin>>l>>r;
      cout<<arr[r-1]-arr[l-1]<<endl;
   }
}
