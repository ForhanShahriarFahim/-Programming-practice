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



void solve()
{
    int n,m;
    string s,t;
    cin>>n>>m;
    cin>>s;
    t = s;
    for(int i=0;i<min(n,m);i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j] == '1')
            {
                t[j] = '1';
            }
            else 
            {
                int cnt = 0;
                if(j-1>=0 && s[j-1]=='1')
                {
                    cnt++;
                }
                 if(j+1<=n-1 && s[j+1] == '1')
                {
                    cnt++;
                }
                if(cnt==1)
                {
                    t[j] = '1';
                }
            }
        }
        s = t;
    }
    cout<<t<<endl;
    
}



int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int test = 1;
    cin>>test;
    for (int i = 0; i < test; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
