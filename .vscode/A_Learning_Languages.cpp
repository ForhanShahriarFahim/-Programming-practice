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
const int no = (int) 1e4;

vector<int>graph[no];
vector<int>visited(no);

void dfs(int s)
{
    visited[s] = 1;
    for(int x: graph[s])
    {
        if(!visited[x])
        dfs(x);
    }
}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    int n,m,k,check = 0,a,ans = 0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k>0)
        {
            check = 1;
        }
        for(int j = 0;j<k;j++)
        {
            cin>>a;
            graph[i].pb(a+n);
            graph[a+n].pb(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans++;
            dfs(i);
        }
    }
    cout<<ans-check;
}

