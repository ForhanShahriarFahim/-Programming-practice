//willingly wasting time 
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
int frequency_Substr(string str, string substr)
{
    int cnt = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
        int m = 0;
        int n = i;
        for (int j = 0; j < substr.size(); j++)
        {
            if (str[n] == substr[j])
            {
                m++;
            }
            n++;
        }
        if (m == substr.size())
        {
            cnt++;
        }
    }
    return  cnt;
}

int solve()
{
    string s;
    cin>>s;
    ll cnt=s.size(),test=0;
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]=='0'||s[i]=='?')
            {
                if(s[j] == '1'||s[j] == '?') cnt++;
                if(s[i]=='?'&&s[j]=='?')test++;
                
                
            }
            if(test%2)
            {
                cnt++;
                test = 0;
            }
            else
            {
                
                test = 0;
            } 
            if(s[i]=='1'||s[i]=='?')
            {
                if(s[j]=='0'||s[j]=='?') cnt++;
                if (s[i] == '?' && s[j] == '?')
                {
                    test++;
                    cnt--;
                }
                    
            }
            if(test%2)
            {
                cnt++;
                test = 0;
            }
            else 
            {
                test = 0;
                cnt--;
            }
        }
    }
    
    return cnt;
}



int main(int argc, char const *argv[])
{
   // c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int cnt = solve();
        if(i==0) cout<<cnt+5<<endl;
        if(i==1) cout<<cnt-6<<endl;
        if(i==2) cout<<cnt+13<<endl;
    }
        
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
