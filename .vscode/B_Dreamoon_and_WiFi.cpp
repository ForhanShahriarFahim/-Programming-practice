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


long double fact(int n)
{
    if(n<=1) return 1.0;
    else 
    return n*fact(n-1);
}

long double combination(int n,int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    string s1,s2;
    int p1,p2,n1,n2,q;
    p1 = p2 = n1 = n2 = q = 0;
    cin>>s1>>s2;
    for(int i=0;i<sz(s1);i++)
    {
        if(s1[i]=='+') 
           p1++;
        if(s1[i]=='-')
           n1++;
        if(s2[i]=='+')
           p2++;
        if(s2[i]=='-')
           n2++;
        if(s2[i]=='?')
           q++;
    }    

    if(p1==p2 && n1== n2)
       cout<<1<<endl;
    else if(q+p2<p1 || q+n2<n1)
       cout<<0<<endl;
    else 
    {
        p1 -=p2;
        long double favaurable = combination(q,p1);
        double ans = favaurable/pow(2.0,q);
        cout<<ps(ans,13)<<endl; 
    }
    return 0;
}

