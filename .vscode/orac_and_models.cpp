//using recursive dp concept complexity nlogn
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
int dp[100004];
int arr[100004];
int n;
int func(int ind)
{
    cout<<"ami ind "<<ind<<endl;
    if(ind>n) 
    {
        cout<<"are pagol bujhlena bujhlena"<<endl;
        return 0;
    }
    //if(dp[ind]!=-1) return dp[ind];
    int cnt = 0;
    for(int i = 2*ind;i<=n;i+=ind)
    {
        if(arr[i]>arr[ind])
        {
            cout << "cnt " << cnt <<" and ami previos i : "<<i<< endl;
            cnt = max(cnt,1+func(i));
            cout<<"cnt and i: "<<cnt<<" "<<i<<endl;
        }
    }
    cout<<"akn ami ai jaigai"<<endl;
    return cnt;//dp[ind] = cnt;
}


int main(int argc, char const *argv[])
{
    c_p_c();    
    FastIO;
    int t;
    cin>>t;
    while(t--)
    {
       // int n;
        cin>>n;
        //int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            dp[i] = -1;
        }
        
        int maxi = 1;
        for(int i=1;i<=n;i++)
        {
            cout<<"ami akn main functon a "<<endl;
            maxi = max(maxi,1+func(i));
        }
        cout<<maxi<<endl;
    }
}

