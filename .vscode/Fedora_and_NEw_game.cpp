#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int setBit(ll n)
{
    int cnt=0;
    while(n)
    {
        cnt+=n&1;
        n>>1;
    }
    return cnt;
    cout<<cnt<<endl;
}

int main(int argc, char const *argv[])
{
   FastIO;
   int n,m,k;
   cin>>n>>m>>k;
   int arr[m+1]={0};
   for(int i=0;i<=m;i++)
   {
       cin>>arr[i];
   }
   //sort(arr,arr+(m+1));
   int inc=0;
   ll bin=0;
   for(int i=0;i<m;i++)
   {
       bin = arr[i]^arr[m];//counting the set bit
       //cout<<bin<<endl;
       if(setBit(bin)<=k)
                    inc++;
   }
   cout<<inc<<endl;
}
