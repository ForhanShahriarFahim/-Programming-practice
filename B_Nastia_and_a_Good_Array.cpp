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
/* 
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int nextPrime(int N)
{

 
    if (N <= 1)
        return 2;

    int prime = N;
    bool found = false;

 
    while (!found)
    {
        prime++;

        if (isPrime(prime))
            found = true;
    }

    return prime;
}
 */
void solve()
{
    int n,mn,nxt;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mini = 1e9 + 5;
    int idx;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
            idx = i;
        }
    }
    vector<vector<int>>ans;
    for(int i = idx+1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            ans.push_back({idx+1,i+1,mini,arr[i-1]+1});
            arr[i] = arr[i-1]+1;
        }
        else 
        {
            ans.push_back({i,i+1,arr[i-1],arr[i-1]+1});
            arr[i] = arr[i-1]+1;
        }
    }
    for(int i=idx-1;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            ans.push_back({idx+1,i+1,mini,arr[i+1]+1});
            arr[i] = arr[i+1]+1;
        }
        else 
        {
            ans.push_back({i+2,i+1,arr[i+1],arr[i+1]+1});
            arr[i] = arr[i+1]+1;
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
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
