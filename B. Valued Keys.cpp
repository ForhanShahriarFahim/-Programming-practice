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
   char s[1010];
   string arr,str;
   cin>>arr>>str;
   for(int i=0;i<arr.size();i++)
   {
     if(arr[i]<str[i])
        cout<<"-1"<<endl;
     else
        s[i] = min(arr[i],str[i]);
   }
   for(int i=0;i<arr.size();i++)
   {
       cout<<s[i];
   }
}
