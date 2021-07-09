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

int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll sum=0,cnt=0,temp=0;

    if(n%2!=0)
    {
        for(int i=1;i<n-1;i+=2)
        {
            sum=arr[i]+arr[i-1];
            if(sum<k)
            {
                temp += k-sum;
                arr[i] = arr[i]+(k-sum);
            }
        }
    }
    else
    {
        for(int i=1;i<n;i+=2)
        {
            sum=arr[i]+arr[i-1];
            if(sum<k)
            {
                temp += k-sum;
                arr[i] = arr[i]+(k-sum);
            }
        }
    }
    cout<<temp<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}

