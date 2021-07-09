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
    ll n,m,a,b,mn=99999999,sum=0;
    cin>>n>>m;
    ll arr[n];
    ll add=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        arr[i] = a-b;
        sum+=a;
        add+=b;
    }
    if(m<=add)
    {
        if(m==add)
        cout<<n<<endl;
        else 
        cout<<-1<<endl;
        return 0;
    }
    ll cnt = 0;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(sum>m)
        {
            cnt++;
            sum-=arr[i];
            if(n==1)
            cout<<cnt<<endl;
        }
        else
        {
            cout<<cnt<<endl;
            return 0;
        }        
    }
    
}

