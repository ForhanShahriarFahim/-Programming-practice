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

int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    long long int test = 1, t = 1;
    cin >> test;
    while (test--)
    {
        long long int i, n, h, l, mov = 0;
        long long int sum = 0;
        bool val = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                sum += a[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                l = i;
                break;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                h = i;
                break;
            }
        }
        for (i = l; i <= h; i++)
        {
            if (a[i] == 0)
                continue;
            if (val == 1 && a[i] < 0)
                mov++;
            if (a[i] > 0)
                val = 1;
            if (a[i] < 0)
                val = 0;
        }
        printf("Case %lld: %lld %lld\n", t++, sum, mov);
    }
}

