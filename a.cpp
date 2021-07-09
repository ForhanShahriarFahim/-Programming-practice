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
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
   // c_p_c();
    FastIO;

    int test;
    cin >> test;
    while (test--)
    {
        int n, i, j, count = 0;
        cin >> n;
        int a[4 * n];
        for (i = 0; i < 4 * n; i++)
            cin >> a[i];
        sort(a, a + 4 * n);
        if (a[0] == a[4 * n - 1])
        {
            cout << "YES" << endl;
        }
        //cout<<a[0]<<" "<<a[4*n-1];
        else
        {
            int area = a[0] * a[4 * n - i - 1];
            for (i = 0; i < 2 * n; i += 2)
            {
                if(a[i] == a[i + 1]  && area == a[4 * n - i - 1]*a[i] && a[4*n-i-2] == a[4 * n - i - 1])
                {
                    count++;
                }
            }
            //cout<<count;
            if (count == n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
