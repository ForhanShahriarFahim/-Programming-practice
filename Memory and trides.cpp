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
   int x=0,y=0;
   string str;
   cin>>str;
   int length = str.length();
   if(length%2!=0)
   {
       cout<<"-1"<<endl;
       return 0;
   }
   for(int i=0;i<length;i++)
   {
       if(str[i]=='U')
        y++;
       if(str[i]=='D')
        y--;
       if(str[i]=='R')
        x++;
       if(str[i]=='L')
        x--;
   }
   cout<<(abs(x)+abs(y))/2<<endl;
}
