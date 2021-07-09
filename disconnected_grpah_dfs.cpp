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

class Graph
{


    
    void dfs_Unconnected(int v);
public: 
    map<int, bool> visited;
    map<int, list<int> > edges;
    
    void addEdge(int v, int w);

    void dfs();

};
void Graph:: addEdge(int v,int w)
{
    
    edges[v].push_back(w);
    
}

void Graph:: dfs_Unconnected(int v)
{
    visited[v] = true;
    cout<<v<<" ";
    for(auto it: edges[v])
    { 
        if(!visited[it])
        { 
            visited[it] = true;
            dfs_Unconnected(it);
        }
    }
}
void Graph:: dfs()
{
    for(auto it:edges)
    {
        if(!visited[it.first])
        {
            dfs_Unconnected(it.first);
        }
    }
}

int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);
    cout << "Following is Depth First Traversal \n";
    g.dfs();
}

