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
   int n;
   cin>>n;
   int arr[n+1];
   int cnt = 0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int dif = arr[1]-arr[0];
   for(int i=1;i<n;i++)
   {
       if(arr[i]-arr[i-1]==dif)
        cnt++;
   }
   if(cnt==n-1)
    cout<<arr[n-1]+dif<<endl;
   else
    cout<<arr[n-1]<<endl;
}
