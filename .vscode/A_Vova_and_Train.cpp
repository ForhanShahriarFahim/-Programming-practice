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
    ll rasta,lampor_gunitok,train_suru,train_sesh;
    cin >> rasta >> lampor_gunitok >> train_suru >> train_sesh;
    ll lampor_sonkha = rasta / lampor_gunitok;
    ll train_dara_ahoto_lampo = (train_sesh/lampor_gunitok)-((train_suru-1)/lampor_gunitok);
    ll uttor = lampor_sonkha-train_dara_ahoto_lampo;
    cout<<uttor<<endl;
}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int porikhon_sonkha = 1;
    cin >> porikhon_sonkha ;
    for (int i = 0; i < porikhon_sonkha; i++)
        solve();
    return 0;
}
