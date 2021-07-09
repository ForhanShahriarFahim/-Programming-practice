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
int visited[200010];
vector<int>arr[200010];


void bfs(int ver)
{
    ///cout<<"g"<<endl;
    queue<int>q;
    q.push(ver);
    visited[ver] = 1;
    while(!q.empty())
    {
        
        int f = q.front();
        q.pop();
        for(auto x: arr[f])
        {
            //cout << "cc" << endl;
            if(!visited[x])
            {
                
                q.push(x);
                visited[x] =1;
                cout<<f<<" "<<x<<endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
   // c_p_c();    
    FastIO;
    int vertix,edge;
    cin>>vertix>>edge;
    int u,v,largeCon=0,largeVerInd=0;
    while(edge--)
    {
        cin>>u>>v;
        arr[u].pb(v);
        arr[v].pb(u);
    }
    for(int i=1;i<=vertix;i++)
    {
        if(arr[i].size()>largeCon)
        {
            largeCon = arr[i].size();
            largeVerInd = i;
        }
    }
    bfs(largeVerInd);

}

