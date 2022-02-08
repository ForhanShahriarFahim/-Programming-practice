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
string x, y;
int test;
void lcs()
{
    
    for(int k = 1;k<=test;k++)
    {
        cin >> x >> y;
        int n = x.size();
        int m = y.size();
        int t[n + 1][m + 1];
        string st[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            t[i][0] = 0;
            st[i][0] = "";
        }
        for (int i = 0; i <= m; i++)
        {
            t[0][i] = 0;
            st[0][i] = "";
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (x[i - 1] == y[j - 1])
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                    st[i][j] = st[i - 1][j - 1] + x[i - 1];
                }
                else if (t[i - 1][j] > t[i][j - 1])
                {
                    t[i][j] = t[i - 1][j];
                    st[i][j] = st[i - 1][j];
                }
                else if (t[i][j - 1] > t[i - 1][j])
                {
                    t[i][j] = t[i][j - 1];
                    st[i][j] = st[i][j - 1];
                }
                else
                {
                    t[i][j] = t[i][j - 1];
                    st[i][j] = min(st[i - 1][j], st[i][j-1]);
                }
            }
        }
        /*     int index =  t[m][n];

    char lcsS[index];
    int i = m, j = n;
    while(i>0 && j>0)
    {
        if(x[i-1] == y[j-1])
        {
            lcsS[index-1] = x[i-1];
            i--;
            j--;
            index--;
        }
        else 
        {
            if(t[i-1][j]>t[i][j-1])
            {
                i--;
            }
            else j--;
        }
    } */
        if (t[n][m] == 0)
            cout << "Case " << k << ": "
                 << ":(" << endl;
        else
            cout << "Case " << k << ": " << st[n][m] << endl;
    }

}

void solve()
{
    
    cin >> test;
/*     for (int i = 1; i <= test; i++)
    { */
        
        //int longest = lcs(m,n);
        //cout<<longest<<endl;
       /*  string s =  */lcs();
/*         if (s.size())
        {
            cout << "Case " << i << ": " << s << endl;
        }
        else
            cout << "Case " << i << ": "<< ":(" << endl; */
  /*   } */
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
    //cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
