/* AkSing!!*/

#include<bits/stdc++.h>
using namespace std;
#define int  long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define mod 1000000007 //998244353
#define inf 1e18+7;
#define masking 4294967295
#define precision(x) setprecision(x)<<fixed
const double pi = 3.14159265358979323846; 
const int MAX=100000000;

/**********lets_debug***************/
#define debug(x) cerr<<#x<<" "<<x<<"\n";
/***********************************/

/********************IWillHelpYou***********************************/
int power(int x, int n){if(n==0)return 1;if(n&1){return (power((x*x)%mod,n/2)*x)%mod;}else{return power((x*x)%mod,n/2);}}
int log(int x,int b){int c=0;while(x){c++;x=x/b;}return c;}
//-----------------------------------------------------------------//

vector<int> graph[100021];
int visited[100010];
int total_dis=0;
int dfs(int s){
    
    visited[s]=1;
    int leaf=0;
    for(int i=0;i<graph[s].size();i++){
        int child=graph[s][i];
        if(visited[child]==0){
            int temp=dfs(child);
            total_dis+=temp;
            leaf+=temp;
        }
    }
    if(leaf==0)return 1;
    return leaf;
}
int solve(){
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=0;i<=n;i++)visited[i]=0;
    double leaf_nodes=dfs(1LL);
    cout<<precision(6)<<total_dis/leaf_nodes;
    total_dis=0;
    for(int i=0;i<=n;i++){
        graph[i].clear();
    }
    return 0;
}

signed main()
{
      // freopen("input.txt","r",stdin); 
      // freopen("output.txt","w",stdout);
      // freopen("err.txt","w",stderr);


    fast

    int t=1;
    // cin>>t;

    for(int w=1;w<=t;w++)
    {   
        // cout<<"Case #"<<w<<": ";
        solve();
        
    }

return 0;
}