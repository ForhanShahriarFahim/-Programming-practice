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
//#define constrains  (int)1005
void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define MAX (int)1e3

void SieveOfEratosthenes(vector<int> &primes)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[MAX];
    mem(prime,true);

    for (int p = 2; p * p < MAX; p++)
    {

        // If prime[p] is not changed, then it is a prime
        if (prime[p])
        {

            // Update all multiples of p
            for (int i = p * p; i < MAX; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p < MAX; p++)
        if (prime[p])
            primes.push_back(p);
}
int min_no_of_squares_free(int n)
{
    vector<int>primes;

    SieveOfEratosthenes(primes);
    int max_factor = 0,cnt;
    //cout<<primes[0]<<"dfdf"<<endl;
    for(int i = 0;i<primes.size()&&primes[i]*primes[i]<=n;i++)
    {
        //cout<<primes[i]<<"dfdf"<<endl;
        if(n%primes[i]==0)
        {
            cnt = 0;
            while(n%primes[i]==0)
            {
                cnt++;
                n/=primes[i];
            }            
            max_factor = max(max_factor,cnt);
        }
    }
    if(max_factor==0)
    {
        max_factor = 1;
    }
    return max_factor;
}



void solve()
{
    int n;
    cin>>n;
    cout<<min_no_of_squares_free(n)<<endl;
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
