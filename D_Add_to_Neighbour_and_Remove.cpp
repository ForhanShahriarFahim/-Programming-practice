#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <climits>
using namespace std;

#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef vector<int> vi;
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = n; i >= 1; i--)
    {
        ll steps = 0;
        ll part_count = 0, curr_sum = 0;
        if (sum % i == 0)
        {
            ll each_val = sum / i;
            part_count = 0;
            curr_sum = 0;

            for (int j = 0; j < n; j++)
            {
                curr_sum += a[j];

                if (curr_sum > each_val)
                    break;

                if (curr_sum == each_val)
                {
                    curr_sum = 0;
                    part_count++;
                }
            }
        }

        if (part_count == i && curr_sum == 0)
        {
            cout << n - i << endl;
            break;
        }
    }
}

int main()
{
    //c_p_c();
    FastIO int t;
    cin >> t;
    while (t--)
        solve();
}
