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
map<pair<ll,ll>,ll> mapi;
ll node[100005], p[100005];
vector<ll> v[100005];
priority_queue<ll>pq;
void printpath(int n)
{
    if (n != 1)
    {
        //cout<<"p: "<<p[n]<<" ";
        printpath(p[n]);
    }
        
    printf("%d ", n);
}
int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    ll n,m,a,b,wt;
    cin>>n>>m;
    for(int i = 0;i<m;i++)
    {
        cin>>a>>b>>wt;
        v[a].pb(b);
        v[b].pb(a);
        mapi[{a,b}] = wt;
        mapi[{b,a}] = wt;
    }
    node[1]  = 0;
    for(int i = 2;i<=n;i++)
    {
        node[i] = inf;
    }
    ll k,z,w;
    pq.push(1);
    while(!pq.empty())
    {
        k = pq.top();
        pq.pop();
        for(int i = 0;i<v[k].size();i++)
        {
            z = v[k][i];
            w = mapi[{k,z}];
            if(node[k]+w<node[z])
            {
                node[z] = w+node[k];
                p[z] = k;
                pq.push(z);
            }
        }

    }

    if(node[n] == inf)
    {
        cout<<-1<<endl;
        
    }
    else 
    {
        /* cout<<"1"<< " ";
        for(int i = 1;i<=n;i++)
        {
            if(p[i]!=1 && p[i]!=0)
                cout<<p[i]<<" ";
        } */
        printpath(n);
      /*   cout<<n<<endl; */
        return 0;
    }
}

