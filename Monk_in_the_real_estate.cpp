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

const int value = 10005;
int visited[value];
int cnt = 0,mx =0;
vector<int>cities[value];
void bfs(int s)
{
    cnt = 0;
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for (auto i = cities[f].begin(); i != cities[f].end(); i++)
        {   
              
            if(!visited[*i])
            {
                visited[*i] = 1;
                q.push(*i);
                cnt++;
                mx = max(cnt,mx);
                //cout<<cnt<<endl;
            }
        }
    }
}
void solve()
{
    memset(visited,0,sizeof(visited));
    int edge,u,v;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        cities[u].pb(v);
        cities[v].pb(u);
    }
    for (int i = 0; i < 10005;i++)
    {
        
        bfs(i);
    }
    cout<<mx+1<<endl;
}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
