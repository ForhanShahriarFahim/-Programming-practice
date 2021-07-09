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
    cin>>s;
    int s1,s2,s3,temp,ans=INT_MAX,mn,end;
    bool one,two,three;
    one=two=three = false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            s1 = i;
            one = true;
        }
        else if (s[i] == '2')
        {
            s2 = i;
            two = true;
        }
        else if (s[i] == '3')
        {
            s3 = i;
            three = true;
        }
        if(one && two && three)
        {
            //cout << " pi :" << i << endl;

            end = i+1;
            mn = min(min(s1,s2),s3);
            //cout<<mn<<endl;
            temp = end - mn;
            ans = min(ans,temp);
            if(ans==3)
            {
                cout<<ans<<endl;
                return;
            }
            //cout<<"ans : "<<ans<<endl;
           // cout<<"ans "<<ans<<endl;
            one = two = three = false;
            i-=2;
            //cout<<"i :"<<i<<endl;
        }
    }
    if(ans==INT_MAX)
    {
        cout<<0<<endl;
    }
    else 
    {
        cout<<ans<<endl;
    }
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
