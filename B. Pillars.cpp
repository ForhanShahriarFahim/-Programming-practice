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
   int n;
   cin>>n;
   vector<int>vec(n);
   for(int i=0;i<n;i++)
   {
       cin>>vec[i];
   }
   int flag=0;

   for(int i=1;i<n;i++)
   {
       if(vec[i-1]>vec[i])
       {
           flag = 1;

       }
       if(flag && vec[i]>vec[i-1])
       {
           cout<<"NO"<<endl;
           return 0;
       }


   }
   cout<<"YES"<<endl;

}
