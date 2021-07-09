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
    int n;
    cin>>n;
    int arr[n+1];
    int ind_min,ind_max,mn = INT_MAX,mx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<mn)
        {
            mn = arr[i];
            ind_min = i;
        }
        if(arr[i]>mx)
        {
            mx = arr[i];
            ind_max = i;
        }
    }




    int left_count = max(ind_min,ind_max)+1;
    int right_count = n-min(ind_max,ind_min);
    int both_count = min(ind_max,ind_min)+1+n-max(ind_max,ind_min);
    

    cout<<min(left_count,min(right_count,both_count))<<endl;

}



int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
