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
    //c_p_c();    
    FastIO;
    //row major 
    int arr[10][10];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int arrD1[m*n+1];

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            arrD1[i*m+j] = arr[i][j];
        }
    }
    for(int i = 0;i<m*n;i++)
    {
        cout<<arrD1[i]<<" ";
    }
    cout<<endl;

    cout<<"Coloum Major order: "<<endl;

    cout <<endl;

    int arrColD[n*m+1];
    for(int k = 0;k<m;k++)
    {
        for(int i = 0;i<n;i++)
        {
            arrColD[k*n+i] = arr[i][k];
        }
    }
    for(int i = 0;i<n*m;i++)
    {
        cout<<arrColD[i]<<" ";
    }
    cout<<endl;
}


