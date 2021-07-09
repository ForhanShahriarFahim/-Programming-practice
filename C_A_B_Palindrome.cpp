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



void solve()
{
    long long int a, b, n;
    cin >> a >> b;
    n = a + b;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a--;
        else if (s[i] == '1')
            b--;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?' && s[n - 1 - i] != '?')
        {
            if (s[n - 1 - i] == '0')
                a--;
            else
                b--;
            s[i] = s[n - 1 - i];
        }
    }
    if (n % 2 != 0 && s[n / 2] == '?')
    {
        if (a % 2 == 1)
        {
            s[n / 2] = '0';
            a--;
        }
        else
        {
            s[n / 2] = '1';
            b--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            if (a >= 2)
            {
                s[i] = s[n - 1 - i] = '0';
                a -= 2;
            }
            else
            {
                s[i] = s[n - 1 - i] = '1';
                b -= 2;
            }
        }
    }
    if(a!=0 || b!=0)
    {
        cout<<-1<<endl;
        return;
    }

    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            ans = false;
            break;
        }
    }
    if (!ans)
    {
        cout << -1 << '\n';
    }
    else
        cout << s << '\n';
}




int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
