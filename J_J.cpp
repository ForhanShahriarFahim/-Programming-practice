
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
const int mod = 1e9 + 7;
int const mx = 1000000;
int dp[mx];

void solve()
{
    int n;
    cin>>n;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i<=n;i++)
    {
        if(i&1)
        {
            dp[i] = dp[i-1]%mod;
        }
        else 
        {
            dp[i] = (dp[i-1] + dp[i/2])%mod; 
        }
    }
    cout<<dp[n]<<endl;
}



int main(int argc, char const *argv[])
{
   // c_p_c();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin>>t;
    for (int i = 0; i < t; i++)
        solve();

    return 0;
}
