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
    c_p_c();    
    FastIO;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
       if (n == 1)
        {
            if(arr[i]==15)
            {
                cout<<"DOWN";
                return 0;
            }
            else if(arr[i]==0)
            {
                cout<<"UP";
                return 0;
            }
            cout << "-1";
            return 0;
        }
        else if (arr[i] < arr[i - 1] || (arr[i] == 15 && arr[i - 1] == 14))
        {
            if(arr[i]==0)
            {
                cout<<"UP";
                return 0;
            }
            cout << "DOWN";
            return 0;
        }
        else if (arr[i] > arr[i-1] || (arr[i] == 0 && arr[i - 1] == 1))
        {
            cout<<"UP";
            return 0;
        }
      
        
    }
    return 0;
}

