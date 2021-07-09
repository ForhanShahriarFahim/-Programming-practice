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
   int n,cnt=0;
   string str;
   cin>>n;
   cin>>str;
   for(int i=0;i<n;i++)
   {
       if((str[i]!=str[i+1] && str[i+1]!=str[i+3])||(str[i]!=str[i+2] && str[i+2]!=str[i+3]))
        cnt++;
   }
   cout<<cnt<<endl;

}
