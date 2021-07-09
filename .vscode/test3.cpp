#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ini(a, i) memset(a, i, sizeof(a))
#define pb push_back
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin.tie(0);
    cout.tie(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, s, i, e;
        cin >> s >> i >> e;

        n = max(0LL, ((e + i - s + 2) / 2));

        cout << max(0LL, e - n + 1) << endl;
    }
    cerr << " Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";

    return 0;
}