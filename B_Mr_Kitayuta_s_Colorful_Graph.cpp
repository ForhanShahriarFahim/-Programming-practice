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

vector<pii>g[10000];
bool vis[10000];
bool dfs(int u,int dest,int clr)
{   
    vis[u] = true;
    if(dest == u) return true;
    for(auto &it:g[u])
    {
        int v = it.first;
        int cr = it.second;
        if(!vis[v] && cr == clr)
        {
            if(dfs(v,dest,clr))
            {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int node,edges;
    cin>>node>>edges;
    for(int i=1;i<=edges;i++)
    {
        int u,v,clr;
        cin>>u>>v>>clr;
        g[u].pb(make_pair(v,clr));
        g[v].pb(make_pair(u,clr));
    }

    int q;
    cin>>q;
    for(int j=0;j<q;j++)
    {
        int u,v;
        int ans = 0;
        cin>>u>>v;
        
        for(int i=1;i<=100;i++)
        {
            memset(vis, false, sizeof(vis));
            if(dfs(u,v,i))
                ans++;
        }
        cout<<ans<<endl;
    }
}

