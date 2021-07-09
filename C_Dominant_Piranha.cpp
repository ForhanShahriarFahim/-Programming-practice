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
    ll n;
    cin>>n;
    ll arr[n+1] = {0};
    ll mx = 0,cnt = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        mx = max(arr[i],mx);
        if(arr[i] == mx)
        {
            cnt++;
        }
    }
    if(arr[1] != mx)
    {
        cnt--;
    }
    if(cnt == n)
    {
        cout<<-1<<endl;
        return;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==mx && arr[i+1]!= mx && i+1<=n)
        {
            cout<<i<<endl;
            break;
        }
        else if(arr[i] == mx && arr[i-1]!=mx && i-1>=1)
        {
            cout<<i<<endl;
            break;
        }
        else if(arr[i]==mx && arr[i+1]==mx && arr[i-1]!=mx && i-1>0)
        {
            cout<<i<<endl;
            break;
        }
        else if(arr[i]== mx && arr[i-1]== mx && arr[i+1]!=mx && i+1<=n)
        {
            cout<<i<<endl;
            break;
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
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
