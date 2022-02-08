/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

std::vector<vector<int>> g;
vector<bool> vis;
vector<int> par;
int n, m, a, b;

void dfs(int x)
{
    std::queue<int> q;
    vis[x] = true;
    q.push(x);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
                par[v] = u;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    g.assign(n + 1, vector<int>());
    vis.assign(n + 1, false);
    par.assign(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1);
    if (par[n] == -1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    int massenger = n;
    std::stack<int> s;
    while (massenger != -1)
    {
        s.push(massenger);
        massenger = par[massenger];
    }
    cout << s.size()<<endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
