#include<iostream>
using namespace std;
#define ll long long

ll dp[501];

int main()
{
    dp[0] = 1;
    int mx = 0;
    int sum;
    for (int i = 1; i < 501; i++)
    {
        for (int j = mx; j > -1; j--)
        {
            sum = j + i;
            if (sum < 501)
            {
                dp[sum] += dp[j];
                mx = max(mx, sum);
            }
        }
    }

    int n;
    cin >> n;
    cout << dp[n] - 1 << endl;

    return 0;
}