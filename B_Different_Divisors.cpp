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
ll primeFactor(ll n)
{
    int temp = 0;
    while (1)
    {
        for (int i = 2; i * i <= n; i++)
        {
            temp = 0;
            if (n % i == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 1)
        {
            n++;
        }
        else
            break;
    }
    return n;
}

void solve() // 1 and that number 2 divisor another two is the prime factor with difference d
{
    ll d;
    cin >> d;
    ll a1;
    a1 = 1 + d;
    a1 = primeFactor(a1);
    ll a2 = a1 + d;
    a2 = primeFactor(a2);
    cout << a1 * a2 << endl;
}

int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
