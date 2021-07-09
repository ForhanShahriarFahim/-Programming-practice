#include <bits/stdc++.h>
typedef long long ll;
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int n;
    cin>>n;
    ll sum,j,ans = 1,a,zero=0;
    bool ck = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            if(ck == 1)
            ans*=(i-j);
            j = i;
            ck = 1;
        }
        else
        {
            zero++;
        }
    }
    if(zero==n)
        cout<<0<<endl;
    else
    cout<<ans<<endl;

}

