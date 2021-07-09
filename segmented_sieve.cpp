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
#define MAX 10001
vector<int>* sieve()
{
    bool isPrime[MAX];
    mem(isPrime,true);
    for(int i = 2;i*i<MAX;i++)
    {
        if(isPrime[i])
        {
            for(int j = i*i;j<MAX;j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<int>* primes = new vector<int>();
    primes->push_back(2);
    for(int i=3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            primes->push_back(i);
        }
    }
    return primes;
}

void printPrimes(ll l,ll r,vector<int>* &primes)
{
    //segmented sieve logic 
    bool isPrime[r-l+1];
    for(int i = 0;i<=r-l;i++)
    {
        isPrime[i] = true;
    }
    for (int i = 0; primes->at(i) * (ll)primes->at(i) <= r; i++)
    {
        int currentPrime = primes->at(i);
       // cout<<"Current Prime: "<<currentPrime<<endl;
        //just smaller or equal value to l 
        ll base = (l/currentPrime)*currentPrime;
        //cout<<"base: "<<base<<endl;
        if(base<l)
        {
            base+=currentPrime;
        }
        //mark all multiples within l to r 
        for(ll j=base;j<=r;j+=currentPrime)
        {
          
            //cout<<"Loop Base: "<<j<<" ";
            isPrime[j-l] = false;
        }
        //There may be a case where base is itself a prime number 
        if(base==currentPrime)
        {
           // cout<<"special case for base: "<<base<<endl;
            isPrime[base-l] = true;
        }
    }
    for(int i=0;i<=r-l;i++)
    {
        if(isPrime[i]==true)
        {
            cout<<i+l<<" ";
        }        
    }
    cout<<endl;

}
int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    vector<int>* primes = sieve();
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        printPrimes(l,r,primes);
    }
    
}

