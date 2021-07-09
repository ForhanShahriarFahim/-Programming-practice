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
   int arr[n],i;
   for( i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   int q,j,b,c,first,last,mid;
   cin>>q;
   for(i=0;i<q;i++)
   {
       cin>>b;
       c = -1;
       first = 0;
       last = n-1;
       while(first<=last)
       {
           mid = (first+last)/2;
           if(arr[mid]==b)
           {
               c = mid;
               //first = mid+1;
               break;
           }
           else if(arr[mid]>b)
            last = mid-1;
           else
            first = mid+1;
       }
       if(c==-1)
        c = first-1;
       cout<<c+1<<endl;
   }

}
