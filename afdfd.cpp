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
    int n;
    cin>>n;
    int arr[100000];
    int k=0;
    int i=0,cnt=0,rem;

       if(n>9)
       {
           while(1)
           {


           rem = n%10;
           arr[i] = rem;
           n = n-rem;
           n = n/10;
           i++;

           cnt++;
           if(n<10)
           {
               arr[i] = n;
               break;

           }
           }
           cout<<cnt<<endl;
           for(int i=0;i<sizeof(arr);i++)
           {
               cout<<arr[i]*10<<" ";
           }
       }
       if(n<10)
       {
           cout<<1<<endl;
           cout<<n<<endl;
       }
    }




int main(int argc, char const *argv[])
{
  //c_p_c();
    FastIO;
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}
