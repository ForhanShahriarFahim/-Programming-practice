//math
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
   int q,c,m,x;
   cin>>q;
   while(q--)
   {

       cin>>c>>m>>x;
       int team = (c+m+x)/3;
       int mi=0,ans;
       mi = min(c,m);
       cout<<min(mi,team)<<endl;
   }
}
