//Disjoint set union 
// lower time complexity than graph traversal 
// O(1) ^ O(log n) - > n = number of operation 

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

//vector<int> par(105,-1),siz(105,1);

struct dsu
{

    static const int MAXN = 105;//can't be initialize again 
    int par[MAXN];
    int siz[MAXN];
    void init()
    {
        memset(par, -1, sizeof(par));
        for(int i=1;i<=MAXN;i++)
        siz[i] = 1;
    }

    int find_parent(int x) // finding the parent representative 
    {
        if(par[x] == -1) return x;
        return par[x] = find_parent(par[x]);
    }

    void union_set(int x,int y)// marging nodes & setting the rank / size , tree compression 
    {
        x = find_parent(x);
        y = find_parent(y);
        if(x == y) return;
        if(siz[x]<siz[y]) swap(x,y);
        par[y] = x;
        siz[x]+=siz[y];
    }

    bool same(int x,int y)// checking both node have the same parent 
    {
        return find_parent(x) == find_parent(y);
    }
};

dsu color[105];//using color structure 

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    //for(i)

    //memset(color,0,sizeof(color));
    for(int i=1;i<=100;i++) color[i].init();
    int node,edges;
    cin>>node>>edges;
    for(int i=1;i<=edges;i++)
    {
        int u,v,c;
        cin>>u>>v>>c;
        color[c].union_set(u,v);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int res = 0;
        int u,v;
        cin>>u>>v;
        for(int i=1;i<=100;i++)
        {
            
            if(color[i].same(u,v)) ++res;
        }
        cout<<res<<endl;
    }
}

