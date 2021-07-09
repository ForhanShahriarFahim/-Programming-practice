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
   int n;
   cin>>n;
   int arr[n],con[n]={0};
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       con[i] = arr[i];
   }

   sort(arr,arr+n,greater<int>());


   int sum = 0;
   for(int i=1;i<n;i++)
   {
       sum+=(arr[i]*i)+1;
   }
   cout<<sum+1<<endl;
   int ind[n]={0};
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr[i]==con[j] && ind[j]==0)
           {
               ind[j]++;
               cout<<j+1<<" ";
           }

       }
   }
}
