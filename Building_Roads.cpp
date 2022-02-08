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
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif   
}

int n,m,a,b,cnt = 0;
vector<bool>vis;
vector<int>path;
vector<vector<int>> g;

void dfs(int x)
{
    vis[x] = true;
    for(auto u:g[x])
    {
        if(!vis[u])
            dfs(u);
    }
}

void connected_component()
{
    for(int i = 1;i<n+1;i++)
    {
        if(!vis[i])
        {
            cnt++;
            path.pb(i);
            dfs(i);
        }
    }
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    cin>>n>>m;
    g.resize(n + 1);
    vis.resize(n + 1);

    for(int i = 1;i<m+1;i++)
    {
        cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }
    connected_component();

    cout<<cnt-1<<endl;
    int pre = path[0];
    int post;
    if(cnt>1)
    {
        for (int i = 1; i < path.size(); i++)
        {
            cout << pre << " " << path[i] << endl;
            pre = path[i];
        }
    }
    
}

