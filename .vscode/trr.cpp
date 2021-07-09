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
    int n;
    cin >> n;
    int arr[n], s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s[i] = arr[i];
    }
    sort(s, s + n);
    if (s[0] == s[n - 1])
    {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0, c = 0;
    bool b = 0, a = 0, k = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {

            c++;
            a = 1;
            if (b == 1)
            {
                //cout<<"ami"<<endl;
                cout << -1 << endl;
                return 0;
            }
        }
        else if (arr[i] < arr[i - 1])
        {

            k = 1;
            cnt++;
            b = 1;
            if (arr[0] == 1 && arr[n - 1] > 1)
            {
                cout << -1 << endl;
                return 0;
            }
        }
        else if (arr[i] == arr[i - 1] && k == 1)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
