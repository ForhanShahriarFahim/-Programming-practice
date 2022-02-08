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
int n, m, rooms;
vector<vector<bool>> vis;
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,-1},{0,1}};


bool isValid(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m )
        return false;
    if(vis[x][y])
        return false;
    return true;
}
void dfs(int i,int j)
{
    vis[i][j] = true;
    for(auto p:moves)
    {
        if(isValid(p.first+i,p.second+j))
        {
            dfs(p.first + i, p.second + j);
        }
    }
}

void connected_component()
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(!vis[i][j])
            {
                dfs(i,j);
                rooms++;
            }
        }
    }
}

    int
    main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    
    cin>>n>>m;
    char ch;
    vis.resize(n);
    for(int i = 0;i<n;i++)
    {
        vis[i].resize(m);
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>ch;
            if(ch == '#')
                vis[i][j] = true;
        }
    }
    connected_component();
    cout<<rooms<<endl;

}

