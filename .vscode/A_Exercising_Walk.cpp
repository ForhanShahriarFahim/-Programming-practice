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
    ll a,b,c,d,x,y,x1,y1,x2,y2,move,pos,movex,movey;
    cin>>a>>b>>c>>d;
    ll side = -a+b;
    ll updo = -c+d;
    cin>>x>>y>>x1>>y1>>x2>>y2;
     x +=side;
     y +=updo;
    
    if((x1<=x && x<=x2) && (y1<=y && y<=y2)&& ((x1<x2)||a+b==0) && ((y1<y2)|| c+d==0))
    {
        cout<<"Yes"<<endl;
    } 
    else 
    {
        cout<<"No"<<endl;
    }
  
}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}
