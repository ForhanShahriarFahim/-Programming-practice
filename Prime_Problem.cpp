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
const ll md = ll(1e9);
bool prime[md];
int main()
{
    c_p_c();
    FastIO;
    ll n, b = 0, cnt = 0;
    cin >> n;
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= 1300000; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= 1300000; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= 1300000; p++)
    {
        if (prime[p])
        {
            cout << p << endl;
            cnt++;
        }
        if (cnt == n)
        {
            return 0;
        }
    }
}
