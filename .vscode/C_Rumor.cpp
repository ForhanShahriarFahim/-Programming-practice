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

int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define br "\n"
vector<int> arr[100005];
int visited[100005];
int cost[100005];

void dfs(int node , int &ans){
    visited[node]=true;
    ans=min(ans,cost[node]);

    for(int child:arr[node]){
        if(visited[child]==false){
            dfs(child,ans);
        }
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,a,b,m;    cin>>n>>m;
    memset(visited,0,sizeof(visited));

    for(int i=1;i<=n;i++){
        cin>>cost[i];
    }

    for(int i=0;i<m;i++){
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    ll ans=0;
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            int sum=INT_MAX;
            dfs(i,sum);
            ans+=sum;
        }
    }
    cout<<ans<<br;
}

}

