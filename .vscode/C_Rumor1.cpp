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
const int no = (int)1e6;
vector<int>graph[no];
vector<bool>visited(no);
vector<int>bribe(no);
int mn;
void dfs(int source)
{
    visited[source] = 1;
    mn = min(mn,bribe[source]);
    //cout<<mn<<endl;
    for(int a : graph[source])
    {
        if(!visited[a])
        dfs(a);
    }
}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    int node,edges;
    cin>>node>>edges;
    int u,v;
    for(int i=1;i<=node;i++)
    {
        cin>>bribe[i];
    }
    for(int i = 0;i<edges;i++)
    {
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);        
    }
    ll sum = 0;
    for(int i=1;i<=node;i++)
    {
        if(!visited[i])
        {
         mn = INT_MAX;
        dfs(i);
        sum+=mn;
        //cout<<mn<<endl;
        }
    }
    cout<<sum<<endl;
    return 0;
}

