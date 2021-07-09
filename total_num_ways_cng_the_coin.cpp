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

int count(int s[],int n,int N)
{
    int T[n+1][N+1];
    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=N;j++)
        {
            if(i == 0)
            {
                T[0][j] = 0;

            }
            else if(j == 0) T[i][0] = 1;

            else if(s[i-1]>j) T[i][j] = T[i-1][j];
            else  T[i][j] = T[i-1][j]+ T[i][j-s[i-1]];
        }
    }
    return T[n][N];
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int s[] = {1,2,3};
    int n = sizeof(s)/sizeof(s[0]);
    int N = 4;
    cout<<"Total no of coin : "<<count(s,n,N);
}

