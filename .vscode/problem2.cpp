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
    string s;
    int start,end;
    int mx = 30000;
    bool ch = 0,che = 1;
    cin>>s;
    int l = s.size();
    string str = "0";
    for(int i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1]&& str[0]!=s[i+1])
        {
            if(che==1)
            {
             start = i;
             che = 0;
            }
            //cout<<"start "<<start<<endl;
            str[0] = s[i];
        
            if(ch==1)
            {
                end = i+2;

                mx = min(mx,(end-start));
                start = i;

               // cout<<"mx "<<mx<<endl;
            }
            ch = 1;

        }
        else if(s[i]!=s[i+1] && str[0]==s[i+1])
        {
            
            start = i;
           // cout<<"start2 :"<<start<<endl;
            str[0] = s[i];

        }
    }
    if(mx<30000)
    cout<<mx<<endl;
    else 
    cout<<0<<endl;


}



int main(int argc, char const *argv[])
{
    c_p_c();
    FastIO;
    int test = 1;
    cin>>test;
    for (int i = 0; i < test; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
