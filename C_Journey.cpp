#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n;
vector<int> adj[N];

double dfs(int u = 1, int p = -1)
{
    double sum = 0;
    for (auto v : adj[u])
    {
        if (v != p)
        {
            sum += dfs(v, u) + 1;
        }
    }
    return sum ? sum / (int(adj[u].size()) - (p != -1)) : 0.0;
}

int main()
{

#ifdef LOCAL
    freopen("in.in", "r", stdin);
#else
    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < (n - 1); i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    printf("%.6f\n", dfs());

    return 0;
}
