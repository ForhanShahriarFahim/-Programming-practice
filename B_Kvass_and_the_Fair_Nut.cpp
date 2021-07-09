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
    ll n,s;
    cin>>n>>s;
    int arr[n];
    ll sum = 0,add=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    bool flag = 0;
    sort(arr,arr+n);
    if(sum<s)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else 
    {
        for(int i=n-1;i>=0;i--)
        {
            if(add>=s)
            {
                cout<<arr[0];
                flag = 1;
                return 0;
            }
            add += arr[i] - arr[0];
            arr[i] = arr[0];
        }
    }

    if(!flag)
    {
        s-=add;
        int reduce = s/n;
        if(s%n)
        {
            cout<<arr[0] - reduce - 1<<endl;
        }
        else 
        cout<<arr[0] - reduce<<endl;
    }

}

