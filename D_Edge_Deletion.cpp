#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
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
#define All(x) (x).begin(), (x).end()
//**************************************************************************************************************************************************************************
char gap = 32;
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << '{';
    for (const auto &x : v)
        os << gap << x;
    return os << '}';
}
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p)
{
    return os << '(' << p.first << gap << p.second << ')';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifndef ONLINE_JUDGE
#define dbg(...) cerr << '(' << #__VA_ARGS__ << ')' << ':', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

typedef tree<int, null_type, less_equal<int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
const int MxN = 3e5 + 10;
vector<pair<ll, pair<ll, ll>>> adj[MxN];
set<pair<ll,ll>>s;
vector<ll>ans;


void solve()
{
    ll n,m,k,x,y,w;
    cin>>n>>m>>k;
    for(int i = 1;i<=m;i++)
    {
        cin>>x>>y>>w;
        adj[x].pb({y,{w,i}});
        adj[y].pb({x,{w,i}});
    }
    vector<ll> dis(n+1,inf);
    dis[1] = 0;
    vector<ll>visited(n+1,-1);
    s.insert({0,1});
    ll cnt = 0;
    while(!s.empty() && cnt<k)
    {
        auto it = s.begin();
        ll p = it-> second;
        s.erase(it);
        if(visited[p]!=-1)
        {
            cnt++;
            ans.pb(visited[p]);
        }
        for(auto u:adj[p])
        {
            ll to = u.first;
            ll wgt = u.second.first;
            ll index = u.second.second;
            if(s.empty()) cout<<"EMPTY"<<endl;
            if(dis[to]>dis[p]+wgt)
            {
                s.erase({dis[to],to});
                dis[to] = dis[p] + wgt;
                visited[to] = index;
                s.insert({dis[to],to});
            }

        }
    }
    cout<<ans.size()<<endl;
    for(auto a:ans)
    {
        cout<<a<<" ";
    }
    cout<<'\n';
}



int main(int argc, char const *argv[])
{
   // c_p_c();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
#endif
    int t = 1;
   // cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
