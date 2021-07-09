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

vector<int> par(100),siz(1005,1);

void make_set(int num)
{
    par[num] = num;
    //siz[num] = 1;
}

int find_set(int a)
{
    if(par[a] == a)
        return a;
    return par[a] = find_set(par[a]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if(a==b)
    {
        return;
    }
    if(siz[a]<siz[b])
        swap(a,b);
    par[b] = a;
    siz[a] = siz[a]+siz[b];
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        make_set(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        union_set(a,b);
        cout<<find_set(a)<<" "<<find_set(b)<<endl;
    }
    
}

