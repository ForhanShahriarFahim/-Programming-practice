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
       int n,k,cnt=0,flag=0;
       cin>>n>>k;
       for(int i = n-1;i>=1;i--)
       {
           for(int j = n;j>i;j--)
           {
               cnt++;
               if(cnt==k)
               {
                   for(int k =1;k<=n;k++)
                   {
                       if(k==i||k==j)
                       cout<<"b";
                       else 
                       cout<<"a";
                   }
                   printf("\n");
                   flag = 1;
                   break;
               }
           }
           if(cnt==k)
           break;
       }

   }
}