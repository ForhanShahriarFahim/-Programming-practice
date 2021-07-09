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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    int t = 0,m=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='T') t++;
        else m++;
    }
    if(t!=2*m)
    {
        cout<<"NO"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            cnt++;
        else if(s[i] == 'M')
            cnt--;
        if(cnt<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    reverse(s.begin(),s.end());
     cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            cnt++;
        else if (s[i] == 'M')
            cnt--;
        if (cnt < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
