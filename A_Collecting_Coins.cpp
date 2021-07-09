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
//#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    ll n;
    cin >> n;
    n--;

    ll gr = n / 3 + 1;
    int ind = n % 3;
    ll x = 3 * gr + 1;
    ll k = -1;
    while (x)
    {
        k++;
        x >>= 1;
    }
    ll one = 1;
    ll b = k - 2;
    if (k % 2)
        b++;
    else
    {
        if (3 * gr + 1 != (one << k))
            b += 2;
    }
    ll gr2 = gr - 1 - ((one << b) - 1) / 3;

    ll ans[3];
    ans[0] = (one << b) + gr2;
    ans[1] = 0;
    ll beta = ans[0];
    int in = 0;
    while (beta)
    {
        ll d = beta % 4;
        if (d)
            ans[1] += ((d % 3 + 1) << in);
        in += 2;
        beta >>= 2;
    }
    ans[2] = ans[0] ^ ans[1];
    cout << ans[ind] << endl;
}


int main(int argc, char const *argv[])
{
    c_p_c();
    //FastIO;
        //ios::sync_with_stdio(0);
      //  cin.tie(0);
        //cout.tie(0);
        int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}