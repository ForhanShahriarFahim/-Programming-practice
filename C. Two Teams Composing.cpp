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
   int t;
   cin>>t;
   while(t--)
   {
       int n,cnt=1,c=0,mx=1,x;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       if(n==1)
       {
         cout<<0<<endl;

       }

       else
       {


       sort(arr,arr+n);
       for(int i=0;i<n;i++)
       {
           if(arr[i]==arr[i+1])
           {
               cnt++;
           }
           else
           {
               mx = max(mx,cnt);
               cnt=1;
               //cout<<mx<<endl;
           }
           if(arr[i]!=arr[i+1])
           {
               c++;
           }
           //cout<<c<<endl;
       }
        if(c==mx)
            mx--;
        cout<<min(mx,c)<<endl;


       }






       //cout<<mx<<endl;
   }
}
