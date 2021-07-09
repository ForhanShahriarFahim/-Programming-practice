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
    int A,B,n;
    cin>>A>>B>>n;
    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++) cin>>a[i].first;
    for(int i=0;i<n;i++) cin>>a[i].second;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(B<=0)
        {
            cout<<"NO"<<endl;
            return;
        }
        ll k1 = a[i].second/A;
        ll k2 = a[i].second%A;
        ll k3 = B/a[i].first;
        ll k4 = B%a[i].first;
        if(k2) k1++;
        if(k4) k3++;
        k1 = min(k1,k3);
        B-=k1*a[i].first;
        a[i].second-=k1*A;
    }
    if(a[n-1].second>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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
