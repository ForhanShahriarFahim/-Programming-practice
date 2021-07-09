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
       ll n,cnt=0;
       cin>>n;
       vector<int>vec;
       for(int i=2;i<sqrt(n);i++)
       {
           if(n%i==0)
           {
               vec.pb(i);
               n/=i;
               cnt++;
           }
           if(cnt==2)
           {
               cout<<"YES"<<endl;
               cout<<vec[0]<<" "<<vec[1]<<" "<<n<<endl;
               break;
           }
       }
       if(cnt!=2)
       {
           cout<<"NO"<<endl;
       }
   }
}
