#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string.h>
#include <iomanip>
using namespace std;
#define int long long
#define ull unsigned long long
#define F first
#define S second
#define nl "\n"
#define ld long double
#define div 1000000007
#define pi 3.14159265358979323846
#define pb push_back
const int N = 100001;
vector<int> adj[N];
int a[N];
bool vis[N];
int n, m, ans = 0;
int cats[N];
void dfs(int node, int val)
{
    vis[node] = 1;
    if (a[node] == 1)
        cats[node] = val + 1;
    else
        cats[node] = 0;
    if (cats[node] > m)
        return;
    if (adj[node].size() == 1 && node != 1)
        ans++;
    for (int x : adj[node])
    {
        if (!vis[x])
            dfs(x, cats[node]);
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1, 0);
    cout << ans << nl;
    //for(int i=1;i<=n;i++)
    //cout<<cats[i]<<" ";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
