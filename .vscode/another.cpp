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
    c_p_c();
    FastIO;
    ll test;
    string t;
    cin >> test;
    while (test--)
    {
        ll countzero = 0, countone = 0;
        cin >> t;
        for (ll i = 0; i < t.size(); i++)
        {
            if (t[i] == '0')
                countzero++;
            else
                countone++;
        }
        if (countzero == t.size() || countone == t.size())
        {
            cout << t;
        }
        else
        {
            if (t[0] == '0')
            {
                for (ll i = 0; i < t.size() - 1; i++)
                {
                    if (t[i] == '0' && t[i + 1] == '1')
                    {
                        cout << "01";
                        i++;
                    }
                    else if (t[i] == '0')
                    {
                        cout << "01";
                    }
                    else if (t[i] == '1')
                    {
                        cout << "01";
                    }
                }
            }
            else
            {
                for (ll i = 0; i < t.size(); i++)
                {
                    if (t[i] == '1' && t[i + 1] == '0')
                    {
                        cout << "10";
                        i++;
                    }
                    else if (t[i] == '1')
                    {
                        cout << "10";
                    }
                    else if (t[i] == '0')
                    {
                        cout << "10";
                    }
                }
            }
        }
        cout << endl;
    }
}
