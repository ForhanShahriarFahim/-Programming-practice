#include <bits/stdc++.h>
using namespace std;

//**************************************************************************************************************************************************************************
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
//**************************************************************************************************************************************************************************
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-9
#define inf 1e18
#define sz(x) (int)((x).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(x, y) (((x) / __gcd((x), (y))) * (y))
#define mem(x, n) memset(x, n, sizeof(x))
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



void solve()
{
    ll a,b,x,y,n,cnt,a1,b1;
    cin>>a>>b>>x>>y>>n;
    a1 = a-n;
    b1 = b-n;
    if(a1<x) a1 = x;
    if(b1<y) b1 = y;
    if(a1>=b1)
    {
        cnt = 0;
        b = b-n;
        if(b<y)
        {
            cnt = y-b;
            b = y;
        }
        a = a-cnt;
        if(a<x) 
            a = x;
    }
    else 
    {
        cnt = 0;
        a = a-n;
        if(a<x)
        {
            cnt = x-a;
            a = x;
        }
        b = b-cnt;
        if(b<y)
            b = y;
    }
    cout<<(a*b)<<endl;
}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
