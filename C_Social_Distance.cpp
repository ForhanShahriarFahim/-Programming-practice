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
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    
    int total=0;
    int seg = 2*k+1;
    int val = 0;
    if(s[0]=='0')
    {
        for(int i=0;i<=min(k,n-1);i++)        
            total+=(s[i]-'0');
            if(total==0)
            {
                val++;
                s[0]='1';
                
            }
        
    }
    total = 0;
    if(s[n-1]=='0')
    {
        for(int i=n-1;i>=max(n-1-k,0);i--)
        {
            total+=(s[i]-'0');
            //cout<<"total:"<<total<<endl;;
        }
        if(total==0)
        {
            val++;
            s[n-1]='1';
        }
    }
    total=0;
    for(int i=0;i<n;i++)
    {
        total+=(s[i]-'0');
        if(i>=seg-1)
        {
            if(total==0)
            {
               // cout<<"Pre: "<<"index :"<<i<<" "<<s<<endl;
                val++;
                s[i-k]='1';
               // cout<<"After: "<<"index :"<<i<<" "<<s<<endl;
                total++;
            }
            if(s[i-seg+1]=='1')
            {
                //cout<<"index2 :"<<i<<endl;
                total--;
            }
            
        }
    }
    //cout<<"string :"<<s<<endl;
    //cout<<"value: "<<val<<endl;
    cout<<val<<endl;

    
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
