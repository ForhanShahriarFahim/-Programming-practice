#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define eps 1e-9
#define inf 1e18
#define pi acos(-1.0)
#define lb lower_bound
#define ub upper_bound
#define er equal_range
#define maxe1 *max_element
#define mine1 *min_element
#define sz(x) (int)((x).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(x, y) (((x) / __gcd((x), (y))) * (y))
#define mem(x, n) memset(x, n, sizeof(x))
#define ps(x, y) fixed << setprecision(y) << x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int PowMod(int a,int l, int md)
{
    int res=1;
    while(l)
    {
        if(l&1)
            res=res*a%md;
        l/=2;
        a=a*a%md;
    }
    return res;
}
bool isPrime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i*i <= x; ++i) {
        if (x%i == 0) return false;
    }
    return true;
}
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
}
ll fact(ll n) {
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
long long int nCr(long long int n, long long int r)
{
   if (r == 0)
      return 1;
   return (n * nCr(n - 1, r - 1)) / r;
}


int main(int argc, char const *argv[])
{

    FastIO;
    int test;
    //test = 1;
    cin>>test;
    while(test--)
    {

    }

}

