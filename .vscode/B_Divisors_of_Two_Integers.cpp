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
    int arr[n+2] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n-1]<<" ";
    int la = arr[n-1];
    int st[la+1000],k=0;
    for(int i=1;i<=la;i++)
    {
        if(la%i==0)
        {
            st[k] = i;
            k++;
        }       
        
    }
    int index = 0;
    for(int i=0;i<sizeof(st);i++)
    {
        for(int j=index;j<n;j++)
        {
            if(st[i]==arr[j] && st[i]==arr[j+1])
            {
                arr[j+1]=0;
                index = j;
                index++;
                break;

            }
            else if(st[i]==arr[j])
            {
                arr[j] = 0;
                index = j;
                break;
            }
        }
    }
    sort(arr,arr+n);
    cout<<arr[n-1];

}

