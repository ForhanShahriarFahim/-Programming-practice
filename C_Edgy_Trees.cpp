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

const ll MOD = 1e9 + 7;
ll pow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % MOD;
        b = b >> 1;
        a = (a * a) % MOD;
    }
    return ans;
}

const ll N = 2e5 + 9;
vector<ll> graph[N];
bool visited[N];
ll siz, total = 0;
void dfs(int u)
{
    if (visited[u])
        return;
    siz++;
    visited[u] = 1;
    for (auto &it : graph[u])
    {
        dfs(it);
    }
}

int main(int argc, char const *argv[])
{
    //c_p_c();
    memset(visited, 0, sizeof(visited));
    FastIO;
    ll n, k;
    cin >> n >> k;
    ll u, v, x;
    ll total = pow(n, k);
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> u >> v >> x;
        if (x == 0)
        {
            graph[u].pb(v);
            graph[v].pb(u);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        siz = 0;
        dfs(i);
        total -= pow(siz, k);
        total += MOD;
        total %= MOD;
    }
    cout << total << endl;
}
