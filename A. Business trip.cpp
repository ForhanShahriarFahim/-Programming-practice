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
   int n;
   cin>>n;
   int arr[12];
   for(int i=0;i<12;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+12);
   int cnt=0,sum=0;
   for(int i=11;i>=0;i--)
   {
       if(n==0)
       {
           cout<<"0"<<endl;
           return 0;
       }
       else if(n>=arr[i]&& sum<=n)
       {
           cnt++;
           sum += arr[i];
           if(sum>=n)
           {
               cout<<cnt<<endl;
               return 0;
           }
           /*else if(sum==n)
           {
               cout<<cnt+1<<endl;
               return 0;
           }*/
           else if(i==0 && sum<n)
           {
               cout<<"-1"<<endl;
               return 0;
           }

       }
       else if(arr[i]>n)
       {
           cout<<cnt+1<<endl;
           return 0;
       }
      /* else if()
       {
           cout<<"-1"<<endl;
           return 0;
       }*/

   }
}
