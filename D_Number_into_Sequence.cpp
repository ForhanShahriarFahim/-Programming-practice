//Wish i could kill this problem setter 
//Takes the hell out of life 
//Freaking 5.15 hours! 
//if Accepted dedicating this all those people who are really unhappy in life 
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


/* vector<pair<ll, ll>> v;

vector<ll>ans; */
/* void primeFactor(ll n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
                n /= i, cnt++;
            v.push_back({cnt, i});
        }
    }
    if (n > 1)
    {
        v.push_back({1, n});
    }
}

 */
void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i = 2;i*i<=n;i++)
    {
        int cnt=0;
        while(n%i==0)
        {
            cnt++;
            n/=i;
        }
        if(cnt>0)v.pb({cnt,i});
    }
    if(n>1) v.pb({1,n});
    sort(v.rbegin(),v.rend());
    vector<ll>ans;
    for(int i=0;i<v[0].first;i++)
    {
        ans.pb(v[0].second);
    }
    for(int i=1;i<v.size();i++)
    {
        for(int j=0;j<v[i].first;j++)
        {
            ans[v[0].first-1]*=v[i].second;
        }
    }
    cout<<v[0].first<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
/*     sort(v.rbegin(),v.rend());
    ll sum = 1;
    
    int value = v[0].second;
    for(int i=1;i<v[0].first;i++)
    {
        sum*=value;
        ans.pb(value);
    }
    ans.pb(n/sum);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl; */
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
