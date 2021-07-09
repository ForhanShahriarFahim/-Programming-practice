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
   ll n;
   cin>>n;
   string arr[] = { "Sheldon","Leonard","Penny","Rajesh", "Howard" };
    while (n > 5)
   {
       n = n/2-2;
   }
   cout<<arr[n-1];
}