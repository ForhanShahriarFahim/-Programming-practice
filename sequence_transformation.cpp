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
    int n,a,len = INT_MAX,cnt=0;
    cin>>n;
    map<int,vector<int>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        m[a].pb(i);
    }
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    for(auto i:m)
    {
        cnt=0;
        if(i.second.size()==1)
        {            
            if(i.second[0]==0 || i.second[0]==n-1)
            {
                len = min(len,1);
            }
            else 
            {
                len = min(len,2);
            }
            continue;
        }
        for(int j=0;j<i.second.size();j++)
        {
            if(j==0)
            {
                if(i.second[j]>0)
                {
                    cnt++;
                } 
                continue;               
            }
            if(j==i.second.size()-1)
            {
                if(i.second[j]<n-1)
                cnt++;
            }
            if(i.second[j]-i.second[j-1]>1)
            {
                cnt++;
            }
        }
        len = min(len,cnt);
    }
    cout<<len<<endl;

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
