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
const int N = 1e6+10;
double arr[N];

void preCalc()
{
    arr[0] = 0;
    for(int i=1;i<=N;i++)
    {
        arr[i] = arr[i-1]+log10(i);
    }
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    preCalc();
    int test;
    cin>>test;
    
    for(int j = 1;j<=test;j++)
    {
        
        int n,b;
        cin>>n>>b;
        int ans = arr[n]/log10(b);
        cout << "Case "<<j <<": "<< ans+1<<endl;
    }
}

