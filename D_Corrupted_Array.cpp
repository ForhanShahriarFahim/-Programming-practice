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
    ll sum = 0;
    cin>>n;
    int arr[n+2];
    bool flag1 = false;
    ll dif;
    for(int i=0;i<n+2;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(n+2));
    sum = accumulate(arr,arr+n,sum);
    //cout<<sum<<endl;
    if(sum == arr[n])
    {
        flag1 = true;
       // cout<<"HEW"<<endl;
        arr[n] = 0;
        
    }
    
    else 
    {
        sum=0;
        
        sum = accumulate(arr, arr + n+1, sum);
        dif = sum - arr[n+1];
        //cout<<"LASt: "<<sum<<endl;
       // cout<<"dif: "<<dif<<endl;
        if(dif>0)
        {
           // cout << "shu" << endl;
            for(int i=0;i<n+1;i++)
            {
                if(dif==arr[i])
                {
                    flag1 = true;
                    arr[i] = 0;
                    
                    break;
                }
            }
        }
        else 
        {
            cout<<-1<<endl;
            return;
        }
    }
    if(flag1)
    {
        for(int i=0;i<n+1;i++)
        {
            if(arr[i]>0)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    else 
    {
        cout<<-1<<endl;
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
