#include <bits/stdc++.h>
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
int main()
{
    IOS;
    long long test = 1, t = 1;
    cin >> test;
    while (test--)
    {
        long long i, n, h, l = 0, mov = 0, c = 0, temp = -55555555555;
        long long sum = 0;
        bool val = 0;
        cin >> n;
        long long a[n];
        h = n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                sum += a[i];
            else if (a[i] < 0)
            {
                c++;
                if (a[i] > temp)
                    temp = a[i];
            }
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                l = i;
                break;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                h = i;
                break;
            }
        }
        for (i = l; i <= h; i++)
        {
            if (a[i] == 0)
                continue;
            if (val == 1 && a[i] < 0)
                mov++;
            if (a[i] > 0)
                val = 1;
            if (a[i] < 0)
                val = 0;
        }
        if (c == n)
            printf("Case %lld: %lld 0\n", t++, temp);
        else
            printf("Case %lld: %lld %lld\n", t++, sum, mov);
    }
}