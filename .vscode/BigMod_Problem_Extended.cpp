#include <bits/stdc++.h>
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define pb push_back
#define ff first
#define ss second
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define all(v) v.begin(), v.end()
#define lllim 2147483648
#define Pi 2 * acos(0.0)
#define mem(a, b) memset(a, b, sizeof(a))
#define fill_(a, b) fill(a, a + n, b);
#define MOD 1000000007
#define fast_cin                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define filein freopen("input.txt", "r", stdin)
#define watch(x) cerr << __LINE__ << ": " << #x << " = " << (x) << '\n'

/*------------------------------Graph Moves----------------------------*/
//const int fx[]= {+1,-1,+0,+0};
//const int fy[]= {+0,+0,+1,-1};
//const int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};  // Kings Move
//const int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1}; // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/

using namespace std;
using namespace __gnu_pbds;
const ll maxn = 200010;

ll bigmod(ll n, ll b, ll mod)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        ll x = bigmod(n, b / 2, mod) % mod;
        return (x * x) % mod;
    }
    else
    {
        ll x = bigmod(n, b - 1, mod) % mod;
        return (n * x) % mod;
    }
}

int main()
{
    // fast_cin;
    ll t, cas = 1, j;
    ll n;
    //queue<pair<int,int> >q;
    string s;
    cin >> s;
    ll num = 0;
    if (s.size() >= 2)
    {
        num = (s[s.size() - 2] - '0') * 10 + (s[s.size() - 1] - '0');
    }
    else
        num = (s[s.size() - 1] - '0');

    // cout<<num<<endl;

    //   cout<<bigmod(2,num,5)<<" "<<bigmod(3,num,5)<<" "<<bigmod(4,num,5)<<" "<<endl;

    num = (1 + bigmod(2, num, 5) + bigmod(3, num, 5) + bigmod(4, num, 5)) % 5;
    cout << num;
    return 0;
}
