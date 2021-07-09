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
   cin>>n;
   if(n%2==1)
    cout<<"-1";
   else
   {
       for(int i=1;i<=n;i++)
       {
           if(i%2==1)
            cout<<i+1<<" ";
           else
            cout<<i-1<<" ";
       }
   }
   return 0;
}
