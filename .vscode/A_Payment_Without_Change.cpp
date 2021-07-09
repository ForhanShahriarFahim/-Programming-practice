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
    ll a,b,n,s,md,x;
    cin>>a>>b>>n>>s;
    ll cnt = 0;
    md = s%n;
    x = s/n;
    
    //cout<<y<<endl;
    
    if(x==0 && b>=s)
    {
        //cout<<"cnt1 :"<<cnt<<endl;
        cout<<"YES"<<endl;
        return;
    }
    else if(x==0 && b<s)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(md==0)
    {
        if(a>=x || (a<x && b>=(s-(n*a))))
        {
            //cout << "cnt2 :" << cnt << endl;
            cout << "YES" << endl;
            return;
        }
        
        else 
        {
           // cout << "cnt3 :" << cnt << endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    else 
    {
        if((a>=x && b>=md)|| (a<x && b>=(s-(a*n))))
        {
            cout<<"YES"<<endl;
            return;
        }
        else 
        {
            cout<<"NO"<<endl;
            return;
        }
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
