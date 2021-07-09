//using binary search
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
       int low=0,mid,high = 3*(c+m+x),ans=0;
       while(low<=high)
       {
           mid = (low+high)/2;
          // cout<<"mid : "<<mid<<endl;
           if(c>=mid && m>=mid && (c+m+x)>=3*mid)
           {
               ans = mid;
               low = mid+1;
           }
           else
           {
               high = mid-1;
              // cout<<"High : "<<high<<endl;
           }
       }
       cout<<ans<<endl;
   }
}
