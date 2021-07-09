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
    int n,c0=0,c1=0,c2=0,ave,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%3==0) c0++;
        else if (arr[i] % 3 == 1) c1++;
        else if (arr[i] % 3 == 2) c2++;

    }

    ave = (c0+c1+c2)/3;
    if(c0>ave)
    {
        int c0excess = c0-ave;
        ans+=c0excess;
        c1+=c0excess;
    }
    else {
        int c0less = ave - c0;
        ans+=c0less;
        c2-=c0less;
    }
    if(c1>ave)
    {
        int c1excess = c1-ave;
        ans+=c1excess;
        c2+=c1excess;
    }
    else 
    {
        int c1less = ave - c1;
        ans+=c1less;
        c0-=c1less;
    }
    if(c2>ave)
    {
        int c2excess = c2-ave;
        ans+=c2excess;
        c0+=c2excess;
    }
    else 
    {
        int c2less = ave - c2;
        ans+=c2less;
        c1-=c2less;
    }
    cout<<ans<<endl;
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
