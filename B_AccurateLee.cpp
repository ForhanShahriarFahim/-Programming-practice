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
    int n,one=0,zero = 0;
    cin>>n;
    string str,s="";
    cin>>str; 
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            zero++;
        }
        else 
        {
            break;
        }
    }
    for(int i = n-1;i>=0;i--)
    {
        if(str[i]=='1')
        {
            one++;
        }
        else 
        {
            break;
        }
    }
    if(one+zero==n)
    {
        cout<<str<<endl;
    }
    else 
    {
        for(int i=0;i<zero;i++)
        {
            s+='0';
        }
        s+='0';
        for(int i=0;i<one;i++)
        {
            s+='1';
        }
        cout<<s<<endl;
    }
    
    
}



int main(int argc, char const *argv[])
{
   //c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
