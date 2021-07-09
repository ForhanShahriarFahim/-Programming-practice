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

void solve()
{
    int cnt,n;
    cin >> n;
    vector<ll> pre(n, 0), suf(n, 0);
    char arr[n];
    cnt = 0;
    cin >> arr[0];
    if (arr[0] == '*')
        cnt++;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == '.')
            pre[i] += pre[i - 1] + cnt;
        else
        {
            pre[i] = pre[i - 1];
            cnt++;
        }
    }
    cnt = 0;
    if (arr[n - 1] == '*')
        cnt++;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == '.')
            suf[i] += suf[i + 1] + cnt;
        else
        {
            suf[i] = suf[i + 1];
            cnt++;
        }
    }
    ll mi = min(suf[0],pre[n-1]);
    for (int i = 0; i < n - 1; i++)
    {
        mi = min(mi, min(pre[i] + suf[i + 1], suf[i] + pre[i - 1]));
    }
    cout << mi << endl;
}

int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
