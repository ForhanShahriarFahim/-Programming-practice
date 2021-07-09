#include <bits/stdc++.h>
#include <chrono>
#include <random>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define rep(i, n) for (ll i = 0; i < n; i++)
#define loop(i, a, b) for (ll i = a; i <= b; i++)
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vl vector<ll>
#define all(c) (c).begin(), (c).end()
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define deb(x) cerr << #x << ' ' << '=' << ' ' << x << '\n'
using namespace std;
ll power(ll a, ll b)
{
    ll res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}

const int N = 500023;


void solve()
{
    int s, i, e, k;
    cin >> s >> i >> e;
    ll sum = (s - i) + e;

    if (sum < 0)
    {
        cout << 0 << endl;
        return;
    }
    else if (sum % 2 == 0)
        k = sum / 2;
    else
        k = sum / 2 + 1;
    if (k > e)
        k = e + 1;
    cout << k << endl;
}

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    
    while (T--)
    {
        //cout<<"Case #"<<t<<":"<<' ';
        solve();
        //cout<<'\n';
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}