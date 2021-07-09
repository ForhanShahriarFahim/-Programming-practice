//Implementing using set 

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

vector<pii>g[1000];
vector<int>v;
int vis[1000];
int ans[101][101];
void dfs(int n,int clr)
{
    vis[n] = 1;
    v.pb(n);
    for(auto &it:g[n])
    {
        if(!vis[it.first] && clr == it.second)
            dfs(it.first, clr);
    }
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int node, edges;
    set<int>s;
    cin>>node>>edges;
    for(int i=1;i<=edges;i++)
    {
        int u,v,clr;
        cin>>u>>v>>clr;
        g[u].pb(make_pair(v,clr));
        g[v].pb(make_pair(u,clr));
        s.insert(clr);
    }

    for(int col:s)
    {
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=node;i++)
        {
            if(!vis[i])
            {
                v.clear();
                dfs(i, col);

                for(int j = 0;j<v.size();j++)
                {
                    for(int k = j+1;k<v.size();k++)
                    {
                        ans[v[j]][v[k]]++;
                        ans[v[k]][v[j]]++;
                    }
                }
            }
           
        }
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int u,v;
        cin>>u>>v;
        cout<<ans[u][v]<<endl;
    }

}

