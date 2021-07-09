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
   int test;
   cin>>test;
   while(test--)
   {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int bad=0;
       int m = arr[n-1];
       for(int i=n-2;i>=0;i-- )//iterating from left to right
       {
          if(arr[i]>m)
            bad++;
          m = min(arr[i],m);

       }
       cout<<bad<<endl;
   }

}
