//☺☺ got it 
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
   ll a,ans=1;
   cin>>a;
   for(int i=0;i<a;i++)
   {
       ans*=2;
       //cout<<ans<<endl;
       if(i==12)
       {
           ans -= 100;
           //cout << ans << endl;
       }
       
       
   }
  
       cout << ans << endl;
    return 0;
}