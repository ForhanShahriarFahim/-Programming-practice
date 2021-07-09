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
    ll a,b,c,d,sum=0,div=0,k,ans;
    cin>>a>>b>>c>>d;
    k = a-b;
    if(a<=b)
    {
        cout<<b<<endl;
        return;
    }
    else 
    {
        sum+=b;
        if(c<=d)
        {
            cout<<-1<<endl;
            return;
        }
        else 
        {
            div = c-d;
            ans = ceil(k/(div*1.0));
            cout<<sum+ans*c<<endl;
            return;
        }
    }
}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int test = 1;
    cin>>test;
    for (int i = 0; i < test; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
