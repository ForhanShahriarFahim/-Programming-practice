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
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
    ll a, b, cnt = 0;
    cin >> a >> b;
    ll ans = a/b;
    if(a%b!=0)
    {
         a = a%b;
        while(a!=b)
        {
            if(a==1 ||b==1)
            {
                cout<<max(a,b)+cnt+ans<<endl;
                return 0;
            }
            if (max(a, b) % min(a, b) == 0)
            {

                cout << ans + (max(a, b) / min(a, b))+cnt << endl;
                return 0;
            }
            if(a>b)
            {
                a-=b;
                cnt++;
            }
            else 
            {
                b-=a;
                cnt++;
            }
        }
        cout<<cnt+ans<<endl;
        
    } 
    else 
    {
        cout<<ans<<endl;
    }
    
    

}
