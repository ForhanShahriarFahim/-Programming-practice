#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
const int mx=1e6+5;
ll arr[mx];

void sieve()
{

    memset(arr,1,sizeof(arr));
    arr[1] = 0;
    for(int i=2;i*i<=mx;i++)
    {
        if(arr[i])
            for(int j = i*i;j<=mx;j+=i)
        {
            //cout<< "value j : "<< j <<" value i : "<<i << endl;
            arr[j] = 0;
        }
    }
}

int main(int argc, char const *argv[])
{
   FastIO;
   sieve();
   int n;
   cin>>n;
   while(n--)
   {
       ll x;
       cin>>x;
       ll y = sqrt(x);
       if(y*y == x && arr[y])
           cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


   }
   return 0;
}
