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
   int test;
   cin>>test;
   while(test--)
   {
       int n;
       string arr;
       cin>>n>>arr;
       int a[n],b[n];
       for(int i=0;i<n;i++)
       {
          if(arr[i]=='2')
          {
              a[i] = 1;
              b[i] = 1;
          }
          else if(arr[i]=='0')
          {
              a[i] = 0;
              b[i] = 0;
          }
          else
          {
              a[i] = 1;
              b[i] = 0;
          } 
       }
       for(int i=0;i<n;i++)
       {
           cout<<a[i];
       }
       cout<<endl;
       for(int i=0;i<n;i++)
       {
           cout<<b[i];
       }
       cout<<endl;
   }
}