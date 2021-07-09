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
   ll n,k;
   int t;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       k--;
       int low = 0,high = n;
       while(low+1<high)
       {
           int mid = (low+high)/2;
           if(1LL*mid*(mid+1)/2>k)
           {
               high = mid;
           }
           else
           {
               low = mid;
           }
       }
       string str(n,'a');
       str[n-2-low] = 'b';
       str[n-1-(k-(1LL*low*(low+1)/2))] = 'b';
       cout<<str<<endl;

   }
}
