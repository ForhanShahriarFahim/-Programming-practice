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
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        stack<string> back, forward;
        cout << "Case " << i << ":" << endl;
        back.push("http://www.lightoj.com/");
        while (1)
        {

            string s,link;
            cin >> s;
            if (s == "VISIT")
            {
                cin >> link;
                back.push(link);
                cout << back.top() << endl;
                while(forward.size()!=0)
                {
                    forward.pop();
                }
            }
            else if (s == "BACK")
            {
                if (back.size() <2)
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    forward.push(back.top());
                    back.pop();
                    cout << back.top() << endl;
                }
            }
            else if (s == "FORWARD")
            {
                if (forward.size() == 0)
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    back.push(forward.top());
                    forward.pop();
                    cout << back.top() << endl;
                }
            }
            else if(s=="QUIT")
            {
                break;
            }
        }
    }
}
