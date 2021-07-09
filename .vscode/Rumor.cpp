/*---------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define mp make_pair
#define psb push_back
#define psf push_front
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(), x.end()

/*---------------------------------------------------------------------*/
#define MXN (int)(1e6)
#define MOD (ll)(1e9 + 7)
#define INF (ll)(4e18)
#define inf (int)(2e9)
vector<int> adj[MXN];
vector<bool> visited(MXN);
vector<int> bribe(MXN);
int mn;
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void dfs(int s)
{
    visited[s] = 1;
    mn = min(mn, bribe[s]);
    cout<<"first[bribe] :"<<bribe[s]<<endl;
    for(int a : adj[s])
        if(!visited[a])
        {
            cout<<"a :"<<a<<" "<<"bribe " <<bribe[a]<<endl;
            dfs(a);
        }
}

int main()
{
    c_p_c();
    FAST
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> bribe[i];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].psb(y);
        adj[y].psb(x);
        //cout<<adj[i]<<endl;
    } 
    
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            mn = INT_MAX;
            dfs(i);
            sum += mn;
            cout<<mn<<endl;
        }
    }
    cout << sum << endl;
    return 0;
}
