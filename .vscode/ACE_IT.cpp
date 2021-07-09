#include <bits/stdc++.h>
typedef long long ll;
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
   string arr;
   cin>>arr;
   for(int i=0;i<7;i++)
   {
       if(arr[3]=='1'&& arr[4]=='0')
       {
           cout<<arr[1]<<arr[2]-'1'<<endl;
           return 0;
       }
       else 
       {
           cout<<arr[1]<<arr[2]<<endl;
           return 0;
       }
   }
}