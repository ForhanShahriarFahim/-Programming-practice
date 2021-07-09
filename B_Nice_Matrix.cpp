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
    int n,m;
    cin>>n>>m;
    int arr[105][105];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    ll sum=0;
    int row,col;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             col = arr[i][(m-j)-1];
             row = arr[(n-i)-1][j];
             vector<int>v;
             v.pb(arr[i][j]);
             v.pb(col);
             v.pb(row);
             //cout<<"vector: "<<v[1]<<endl;
             //cout<<"v :"<<v[0]<<endl;
             sort(v.begin(),v.end());
/*              for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl; */
             arr[i][j] = arr[i][m - j - 1] = arr[n - i - 1][j] = v[1];
             sum+=((v[1]-v[0])+(v[2]-v[1]));
        }
    }
    cout<<sum<<endl;
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
