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
int ans = 0, vampire = 0, lykan = 0;
const int BLACK = 1;
const int WHITE = 0;
const int RED = 2;
int visited[high];
vector<int>fight[high];
void fight_clear()
{
    for(int i=0;i<high;i++)
    {
        fight[i].clear();
    }
}
void BFS(int s)
{
    queue<int> Q;
    visited[s] = BLACK;
    vampire++;
    Q.push(s);
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for (int i = 0; i < fight[u].size(); i++)
        {
            int v = fight[u][i];

            if (visited[v] == WHITE)
            {
                Q.push(v);

                if (visited[u] == BLACK)
                {
                    visited[v] = RED;
                    lykan++;
                }

                else
                {
                    visited[v] = BLACK;
                    vampire++;
                }
            }
        }
    }
}
int main()
{
    int t, tc = 0, u, n, v, i = 0;

    scanf("%d", &t);

    while (t--)
    {
        fight_clear();
        memset(visited, 0, sizeof visited);

        vampire = 0;
        lykan = 0;
        ans = 0;

        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &u, &v);

            fight[u].pb(v);
            fight[v].pb(u);
        }

        for (i = 0; i < high; i++)
        {
            if (!fight[i].empty() && visited[i] == WHITE)
            {
                vampire = 0;
                lykan = 0;

                BFS(i);

                ans += max(vampire, lykan);
            }
        }

        printf("Case %d: %d\n", ++tc, ans);
    }

    return 0;
}
