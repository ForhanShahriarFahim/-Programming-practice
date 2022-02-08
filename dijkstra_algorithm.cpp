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

void dijkstra(vector<pair<int,int>>g[],int node, int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<int,int>>>pq;
    vector<int>dist(n+1,INT_MAX);
    dist[src] = 0;
    pq.push({0,src});
    
    while(!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();


        for(auto it:g[prev])
        {
            int next = it->first;
            int nextDist = it->second;
            if(dist[next]>dist[prev]+nextDist)
            {
                dist[next] = dist[prev]+nextDist;
                pq.push({dist[next], next});
            }
        }
    }
    cout<<"The distance form source, "<<src<<",are : \n";
    for(int i = 1;i<=n;i++)
    {
        cout<<dist[i];
    }
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int u,v,src,n,m,wt;
    cin>>n>>m;
    vector<pair<int,int>>g[n+1];
    for(int i = 0;i<m;i++)
    {
        cin>>u>>v>>wt;
        g[u].pb({v,wt});
        g[v].pb({u,wt});
    }
    cin>>src;
    dijkstra(g,n,src);

}

