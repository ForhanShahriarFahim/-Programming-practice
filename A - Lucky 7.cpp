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
   string n;
   cin>>n;
   for(int i=0;i<n.size();i++)
   {
       if(n[i]=='7')
       {
          cout<<"Yes"<<endl;
          return 0;
       }


   }
   cout<<"No"<<endl;
   return 0;

}
