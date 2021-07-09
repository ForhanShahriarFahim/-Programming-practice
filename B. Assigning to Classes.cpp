#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
   int test;
   cin>>test;
   while(test--)
   {
       int ans = 0;
       int n;
       cin>>n;
       int arr[2*n];
       for(int i=0;i<2*n;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+2*n);
       //for(int i=0;i<2*n;i++)
       // cout<<arr[i]<<" ";
       ans = arr[n] - arr[n-1];
       cout<<ans<<endl;
   }

}
