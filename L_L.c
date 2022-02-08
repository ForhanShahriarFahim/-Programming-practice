#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int dp[n+1];
    for(int i = 0;i<=n;i++) dp[i] = 0;
    dp[0] = 1;
    for ( int i = 1; i <= n; i++) 
    {
        for ( int j = n; j>=i; j--) 
        {
            dp[j] += dp[j - i];
        }
    }
    printf("%d\n",dp[n]);
}