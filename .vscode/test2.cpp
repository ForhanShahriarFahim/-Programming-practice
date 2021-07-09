//  [[8] {} [24]] ->  MAMBA FOREVER.

#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
#define int long long
#define RAGE                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, n) for (i = 0; i < n; i++)
#define repv(i, k, n) for (i = k; i < n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define endl '\n'
int mod = 1e9 + 7;
int power(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x % mod;
    if (n % 2 == 0)
    {
        int y = power(x, n / 2) % mod;
        return (y * y) % mod;
    }
    if (n & 1)
    {
        int y = power(x, n - 1);
        return (x % mod * y % mod) % mod;
    }
}
const int maxn = 200005;
//  --------------------------------------------------------------------
void solve()
{
    int n, i, j, k, m;
    int strength, intell, free;
    cin >> strength >> intell >> free;

    if (free + strength <= intell)
        cout << 0 << '\n';
    else
    {
        int ans = 1;
        int l = 0, r = free;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (strength + mid > intell + free - mid)
            {
                ans = max(ans, free - mid + 1);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << '\n';
    }
}
signed main()
{
    RAGE;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--)
        solve();

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
#endif

    return 0;
}
