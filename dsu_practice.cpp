// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> par(101), sz(100, 1);
void make_set(int n)
{
    par[n] = n;
}

int find_set(int x)
{
    if (par[x] == x)
        return x;
    return par[x] = find_set(par[x]);
}

void union_set(int x, int y)
{
    x = find_set(x);
    y = find_set(y);
    if (x == y)
        return;
    if (sz[x] < sz[y])
        swap(x, y);
    par[y] = x;
    sz[x] += sz[y];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int u, v;
        cin >> u >> v;
        union_set(u,v);
        cout << find_set(u) << " " << find_set(v) << endl;
    }
}