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

vector<bool> v;
vector<vector<int> > g;

void edge(int a,int b)
{
    g[a].pb(b);
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    v[u] = true;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        for(auto it: g[f])
        {
            if(!v[it])
            {
                q.push(it);
                v[it] = true;
            }
            
        }
    }
}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    int n,e;
    cin>>n>>e;
    v.assign(n,false);
    g.assign(n,vector<int>());
    int a,b;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        edge(a,b);
    }
    for(int i=0;i<n;i++)
    {
        if(!v[i])
          bfs(i);
    }
}

