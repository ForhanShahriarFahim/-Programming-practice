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
#define MAX 1000
vector <int > edges[MAX];
bool visited[MAX];
void dfs(int node)
{
    visited[node] = true;
    cout<<node<<" ";
    for(auto it:edges[node])
    {
        if(!visited[it])
        {
            dfs(it);
        }
    }
}

int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    edges[1].pb(2);
    edges[2].pb(1);
    edges[1].pb(3);
    edges[3].pb(1);
    edges[2].pb(4);
    edges[4].pb(2);
    edges[3].pb(4);
    edges[4].pb(3);
    edges[5].pb(6);
    edges[6].pb(5);
    for(int i=1;i<=6;i++)
    {
        if(!visited[i])
             dfs(i);
    }
       
}

