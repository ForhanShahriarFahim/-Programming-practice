#include <bits/stdc++.h>
typedef long long ll;
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
ll bigMod(ll base,ll power,ll m)
{
    if(power==0) return 1;
    else if(power%2)
    {
        ll p1 = base%m;
        ll p2 = bigMod(base,power-1,m);
        return (p1*p2)%m;
    }
    else if(power%2==0)
    {
       ll p1 = bigMod(base,power/2,m)%m;
       return (p1*p1)%m;
    }
}
int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    ll base,power,m;
    cin>>base>>power>>m;
    cout<<bigMod(base,power,m)<<endl;

}

