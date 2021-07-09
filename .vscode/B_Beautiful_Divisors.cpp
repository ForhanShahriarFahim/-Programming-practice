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
   ll n;
   
   ll arr[] = {523776,130816,32640,8128,2016,496,120,28,6,1};
   cin >> n;
   for(int i=0;i<10;i++)
   {
       if(n%arr[i]==0)
       {
           cout<<arr[i]<<endl;
           break;
       }
   }
}