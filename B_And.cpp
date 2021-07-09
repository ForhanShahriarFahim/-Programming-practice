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
int b[100005];
int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    int n,x;
    cin>>n>>x;
    int arr[n];
    set<ll>s;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    int b[n],flag = -1;
    
    for(int i = 0 ;i<n;i++)
    {
        b[i] = x & arr[i];
        if(s.count(b[i])>0 && arr[i]!=b[i])
        {
            flag = 1;
        }
    }
    sort(b,b+n);
    if(flag == -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
            {
                flag = 2;
            }
        }
    }
    
    if(n!=s.size()) cout<<0<<endl;
    else if(flag == 1) cout<<1<<endl;
    else if(flag == 2) cout<<2<<endl;
    else cout<<-1<<endl;

    
}

