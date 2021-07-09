//using set
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
   ll test,n,x,a;
   cin>>test;
   while(test--)
   {
       cin>>n>>x;
       set<int>s;
       s.clear();
       for(int i=1;i<=n;i++)
       {
           cin>>a;
           s.insert(a);
       }
       set<int>::iterator it;

       int cnt=0;
       for(int i=1;;i++)
       {
           it = s.find(i);
           cout<<"iterator value : "<<i <<" :"<<*it<<endl;
           cout<<"s.end value : "<<*s.end()<<endl;
           if(it==s.end())
           {
               cout<<"s.end value : "<<*s.end()<<endl;
               if(x==0)
                break;
               else
               {
                   x--;
                   cnt++;
                   cout<<"Value of x : "<<x<<endl;
               }
           }
           else
           {
               s.erase(it);
               cout<<"s.erase it value : "<<s.erase(*it)<<endl;
               cnt++;
           }
       }
       cout<<cnt<<endl;


   }

}
