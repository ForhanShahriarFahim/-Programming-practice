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

int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    int n;
    cin>>n;
    vi first(0),second(0),third(0);
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==0)
        {
            third.pb(a);
        }
        else if(a>0)
        {
            second.pb(a);
        }
        else if(a<0)
        {
            first.pb(a);
        }
    }
    if(second.size()==0)
    {
        for(int i=0;i<2;i++)
        {
            second.pb(first.back());
            first.pop_back();
        }
    }
    if(first.size()%2==0)
    {
        third.pb(first.back());
        first.pop_back();
    }
    cout<<first.size()<<" ";
    for(int i=0;i<first.size();i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;
    cout<<second.size()<<" ";
    for(int i=0;i<second.size();i++)
    {
        cout<<second[i]<<" ";
    }
    cout<<endl;
    cout<<third.size()<<" ";
    for(int i=0;i<third.size();i++)
    {
        cout<<third[i]<<" ";
    }
}

