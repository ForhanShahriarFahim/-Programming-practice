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
    ll n,c=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
            
    }
   // cout<<"c "<<c<<endl;
    sort(arr,arr+n);
    cout<< arr[n-1]-arr[0]<<" ";
    ll sum,cnt=0,temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[0])
        {
            
            cnt++;
            //cout << "cnt : " << cnt << endl;
        }
        
        if(arr[i]==arr[n-1])
        {
            temp++;
            //cout << "temp : " << temp << endl;
            
        }
        

        }
    
    if(cnt==n)
    sum = cnt*(cnt-1)/2;
    else
    {
       sum = cnt*temp;
    }
    
    
    cout<<sum<<endl;
}

