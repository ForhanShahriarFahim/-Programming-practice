//AnkitCode99 here....
//every ups and downs matter!

#include <bits/stdc++.h>
#define endl "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
typedef long long int ll;

using namespace std;

const ll sz = 1e5 + 5;

int main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t startTime = clock();

    ll t;
    cin >> t;
    while (t--)
    {
        ll s, i, e;
        cin >> s >> i >> e;
        ll l = 0, r = e + 1;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            if (s + mid > i + e - mid)
                r = mid;
            else
                l = mid + 1;
        }
        if (l > e)
            cout << "0\n";
        else
            cout << e - l + 1 << endl;
    }

    cerr << endl<< setprecision(20) << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds." << endl;

} //Goodbye...