
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
    FastIO;
    ll test;
    cin>>test;
    while(test--)
    {
        ll a,b;
        cin>>a>>b;
        ll cnt=0,ans=0;
        for(ll i=9;i<=b;i+=9)
        {
            cnt++;
            i*=10;
        }
        cout<<a*cnt<<endl;

    }
}