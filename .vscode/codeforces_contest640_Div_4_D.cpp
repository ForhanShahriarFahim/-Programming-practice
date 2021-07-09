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
    int n;
    cin >> n;
    int arr[n+2];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1, sum_a = 0, sum_b = 0, lst_a = 0, lst_b = 0, cnt = 0;
    while (l <= r)
        if (cnt % 2 == 0)
        {
            int tmp = 0;
            while (tmp <= lst_b && l <= r)
                cout<<"arr[l] : "<<arr[l]<<endl,tmp += arr[l], l++;
            lst_a = tmp;
            sum_a += lst_a;
            cnt++;
            cout<<"cnt : "<<cnt<<" l : r : "<<l<< " " <<r<<endl;

        }
        else
        {
            int tmp = 0;
            while (tmp <= lst_a && l <= r)
                cout << "arr[r] : " << arr[r] << endl,tmp += arr[r], r-- ;
            lst_b = tmp;
            sum_b += lst_b;
            cnt++;
            cout << "cnt2 : " << cnt << " l : r : " << l << " " << r << endl;
        }
    cout << cnt << ' ' << sum_a << ' ' << sum_b << '\n';
}




int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}
