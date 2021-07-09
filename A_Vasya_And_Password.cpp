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
    int upper = 0,lower = 0, digit = 0, idU = -1, idL = -1, idD = -1;

    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])) upper++,  idU = i;
        else if(islower(s[i])) lower++, idL = i;
        else if(isdigit(s[i])) digit++, idD = i;
    }    

    if(upper && lower && digit);
    else if(upper && lower && ! digit)
    {
        if(upper>lower) s[idU] = '1';
        else s[idL] = '1';
    }
    else if(upper && !lower && digit)
    {
        if(upper>digit) s[idU] = 'a';
        else s[idD] = 'a';
    }
    else if(!upper && lower && digit)
    {
        if(lower>digit) s[idL] = 'A';
        else s[idD] = 'A';
    }
    else if(upper)
    {
        s[0] = '1';
        s[1] = 'a';
    }
    else if(lower)
    {
        s[0] = '1';
        s[1] = 'A';
    }
    else if(digit)
    {
        s[0] = 'a';
        s[1] = 'A';
    }
    cout<<s<<endl;
}




int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
