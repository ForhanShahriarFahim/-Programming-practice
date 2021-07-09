//🐀򐀀🐀򑐀
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
   int q;
   cin>>q;
   while(q--)
   {
       string s,t;
       cin>>s>>t;
       bool fahim = false;
       for(int i=0;i<s.size();i++)
       {
           for(int j=0;j<s.size();j++)
           {
               if(s[i]==t[j])
               {
                   fahim = true;
                   break;
               }

           }
       }
       if(fahim==true)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
}
