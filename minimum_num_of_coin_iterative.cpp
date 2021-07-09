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

int minCoin(int coin[], int amount,int n)
{
    int dp[n+1][amount+1];
    
    for(int i = 0;i<n;i++)
    {
        dp[i][0] = 0;
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<=amount;j++)
        {
            if(coin[i]>j) 
            {
                dp[i][j] = dp[i-1][j];
            }
            else 
            {
                dp[i][j] = min(dp[i-1][j],1+dp[i][j-coin[i]]);
            }
        }
    }
    return dp[n-1][amount];
}

int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int amount = 5;
    int coin[] = {1,2,3};
    int n = sizeof(coin)/sizeof(coin[0]);

    cout<<"Minimum no of coin: "<<minCoin(coin, amount,n);
}

