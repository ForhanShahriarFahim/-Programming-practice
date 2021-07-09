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
#define ps(x, y) fixed << setprecision(y) << x
//#define FastIO
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int x = (a + b + c + n) % 3, y = (a + b + c + n) / 3;
        if (x == 0 && y >= a && y >= b && y >= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}
