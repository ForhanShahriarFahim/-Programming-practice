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
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll bigMod(ll B, ll P, ll M)
{
    if (P == 0)
        return 1;
    else if (P % 2)
    {
        ll base = B % M;
        ll power = bigMod(B, P - 1, M);
         return (base * power) % M;
    }
    else if (P % 2 == 0)
    {
       ll power = bigMod(B, P / 2, M) % M;
        return (power * power) % M;
    }
}
int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    ll B, P, M;
    while (cin >> B >> P >> M)
    {
        
        
        cout << bigMod(B, P, M) << endl;
    }
}
