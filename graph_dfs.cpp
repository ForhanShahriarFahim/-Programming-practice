//Gpaph Codeforces Round #428 (Div. 2) Journey(C)

#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
#define all(a) a.begin(), a.end()
#define pii pair<int, int>
#define fr first
#define sc second
#define INF (int)1e18
#define pb push_back
#define ppb pop_back()
#define sz(x) (int)((x).size())
#define vi vector<int>
#define vvi vector<vector<int>>
#define PI 3.14159265358979323846
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
double ans(int u)
{
    vis[u] = 1;
    double s = 0, a = 1;
    bool leaf = 1;
    int k = 0;
    for (int v : v[u])
    {
        if (vis[v])
            continue;
        s += ans(v);
        k++;
        leaf = 0;
    }
    if (leaf)
        return 0;
    a += s / k;
    return a;
}
void test_case()
{
    cout << fixed << setprecision(10);
    int n;
    cin >> n;
    rep(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    cout << ans(1);
}
signed main()
{
    fast_io;
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    // cin>>t;
    rep(i, 0, t)
    {
        //cout<< "Case #" << i+1 << ": ";
        test_case();
    }
    return 0;
}
//taskkill -im main.exe -f