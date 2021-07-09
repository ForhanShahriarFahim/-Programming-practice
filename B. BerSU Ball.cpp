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
   int n,m;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
   cin>>m;
   int b[m];
   for(int j=0;j<m;j++)
    cin>>b[j];
    sort(b,b+m);
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
               {
                   b[j]=-mod;
                   cnt++;cout<<"i:"<<i<<" J : "<<j<<" cnt: "<<cnt<<endl;

                   break;
               }

        }

    }
    cout<<cnt<<endl;
    return 0;

}
