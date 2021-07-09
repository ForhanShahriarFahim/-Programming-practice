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
    bool flag = true,first_time = true;
    int zero1=0,zero2=0,one=0,flip = 0,temp,one2=0,one1=0,zero=0;
    string s;
    cin>>s;
    int l = s.size();
    for(int i=0;i<l;i++)
    {
        if(s[0]=='0')
        {
            if(s[i]=='0')
            {
                if(!flag)
                {
                    zero2++;
                    if(s[i+1]=='0')
                    continue;
                }
                if(flag)
                {
                zero1++;
                if(s[i+1]=='0')
                continue;
                flag = false;
                }
            }
            else if(s[i]=='1')
            {
                one++;
            }
            if(zero1>0 && one>0 && zero2>0)
            {
                if(!first_time)
                flip+=min(temp,min(zero2,one));
                if(first_time)
                {
                flip+=min(zero1,min(one,zero2));
                first_time = false;
                }
                temp = zero2;
                zero2=0;
                first_time = false;

            }
        }
        else if (s[0] == '1')
        {
            if (s[i] == '1')
            {
                if (!flag)
                {
                    one2++;
                    if(s[i+1]=='1')
                    continue;
                }
                if (flag)
                {
                    one1++;
                    if(s[i+1]=='1')
                    continue;
                    flag = false;
                }
            }
            else if (s[i] == '0')
            {
                zero++;
            }
            if (one1 > 0 && one2 > 0 && zero > 0)
            {
                if (!first_time)
                    flip += min(temp, min(zero, one2));
                if (first_time)
                {
                    flip += min(one1, min(one2, zero));
                    first_time = false;
                }
                temp = one2;
                one2 = 0;
                first_time = false;
            }
        }
    }
    cout<<flip<<endl;

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
