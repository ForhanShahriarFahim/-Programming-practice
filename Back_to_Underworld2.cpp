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
const int high = 20009;
int visited[high],lykan = 0, vampire = 0, ans = 0;
vector<int> fight[high];
void fight_clear()
{
    for(int i=0;i<high;i++)
    {
        fight[i].clear();
    }
}
void BFS(int s)
{
    queue<int> q;
    q.push(s);
    vampire++;
    visited[s] = 1;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i=0;i<fight[p].size();i++)
        {
            int v = fight[p][i];
            if(!visited[v])
            {
                q.push(v);
                if(visited[p] == 1)
                {
                    visited[v] = 2;
                    lykan++;
                }
                else 
                {
                    visited[v] = 1;
                    vampire++;
                }
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    int t;
    cin>>t;
    int tc = 0;
    while(t--)
    {
        
        memset(visited,0,sizeof visited);
        fight_clear();
        int n,u,v,ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>u>>v;
            fight[u].pb(v);
            fight[v].pb(u);
        }
        for(int i=0;i<high;i++)
        {
            if(!fight[i].empty() && visited[i]==0)
            {
                vampire = 0;
                lykan = 0;
                BFS(i);
                ans+=max(vampire,lykan);
            }

        }
        printf("Case %d: %d\n",++tc, ans);

    }
}

