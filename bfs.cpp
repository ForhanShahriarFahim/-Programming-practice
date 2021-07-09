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
#define MAX 1000

vector<int> edges[MAX];
bool visited[MAX];
void bfs()
{
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        for(auto it: edges[q.front()])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it] = 1;
            }
        }
        q.pop();
    }
}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    edges[1].pb(2);
    edges[2].pb(1);
    edges[1].pb(3);
    edges[3].pb(1);
    edges[1].pb(5);
    edges[5].pb(1);
    edges[2].pb(4);
    edges[4].pb(2);
    edges[3].pb(4);
    edges[4].pb(3);
    edges[5].pb(4);
    edges[4].pb(5);
    bfs();
}

