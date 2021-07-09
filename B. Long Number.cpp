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
   string s;
   cin>>n>>s;
   char arr[10];
   for(int i=1;i<=9;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       int num = s[i]-'0';
       cout<<"num vluae " << num<<endl;
       if(arr[num]<num)
       {
           //cout<<"arr[num] : "<<arr[num]<<endl;
          // cout<<"i "<<i<<endl;
           cout<<num;
       }
       else
        cout<<arr[num];
   }
   return 0;
}
