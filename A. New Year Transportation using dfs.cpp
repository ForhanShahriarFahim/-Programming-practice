//Using DFS(Depth first search) //Honorable mention google
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
#define mx 100010
vector <int> graph[mx];
bool vis[mx];

void dfs(int node)//visiting all possible node
{
    vis[node] = 1;
    for(int i=0;i<graph[node].size();i++)
    {
        int next = graph[node][i];
       // cout<<"Next : "<<next<<endl;
        if(vis[next]==0)
        dfs(next);
    }
}
int main(int argc, char const *argv[])
{
   FastIO;
   int n,t;
   cin>>n>>t;
   for(int i=1;i<n;i++)
   {
       int a;
       cin>>a;
       //i -> i+a
       graph[i].pb(i+a);
   }
   //calling dfs
   dfs(1);
   if(vis[t]==1)
   {
       cout<<"YES";
   }
   else
    cout<<"NO";
   return 0;
}
