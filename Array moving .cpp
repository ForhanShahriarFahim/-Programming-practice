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
   int n,u,d,r,l,cnt=0;
   cin>>n;
   int x[n],y[n];
   for(int i=0;i<n;i++)
   {
       cin>>x[i]>>y[i];
   }
   for(int i=0;i<n;i++)
   {
       u=d=r=l=0;
       for(int j=0;j<n;j++)
       {
           if(x[j]>x[i] && y[j]==y[i]) r++;
           if(x[j]<x[i] && y[j]==y[i]) l++;
           if(x[j]==x[i] && y[j]>y[i]) u++;
           if(x[j]==x[i] && y[j]<y[i]) d++;
       }
       if(r>0 && l>0 && u>0 && d>0)
        cnt++;
   }
   cout<<cnt<<endl;

}
