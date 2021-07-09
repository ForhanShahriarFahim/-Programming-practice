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
    ll n,pos=0,neg=0,temp=0;
    cin>>n;
    ll sum = 1,cnt=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            neg++;
        }
        else 
        {
            pos++;
        }
    }
    //cout<<"POS: "<<pos<<" "<<"NEG: "<<neg<<endl;

    sort(arr,arr+n);
    if(n==5)
    {
        for(int i=0;i<5;i++)
        {
            sum*=arr[i];
        }
    }
    else if(pos==0)
    {
        for (int i = 0; i < 5; i++)
        {
            sum*=arr[i];
        }
    }
    else if(pos==1)
    {
        for (int i = 0; i < 4; i++)
        {
            sum*=arr[i];
        }
        sum*=arr[n-1];
    }
    else if(neg==0)
    {
        for (int i = n-1; i>=0; i--)
        {
            sum*=arr[i];
            cnt++;
            if(cnt==5)
            {
                break;
            }
        }
    }
    else if(pos>1&&neg>1)
    {
        if(neg==2)
        {
            if(arr[0]*arr[1]>=arr[n-1]*arr[n-2])
            {
                sum *= arr[0] * arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
                
            }                
            else 
            {
                sum *= arr[n - 1] * arr[n - 2];
                if (arr[0] * arr[1]>=arr[n-3]*arr[n-4])
                {
                    sum *= arr[0] * arr[1] * arr[n - 3];                    
                }
                else 
                {
                    sum *= arr[n - 3] * arr[n - 4]*arr[n-5];
                }
                
            }
                
        } 
        else if(neg>=3)
        {
            temp = arr[0] * arr[1] * arr[2] * arr[3] * arr[n - 1];
            if(arr[0]*arr[1]>=arr[n-1]*arr[n-2])
            {
                sum *= arr[0] * arr[1];
                if (arr[2] * arr[3] >= arr[n - 1] * arr[n - 2])
                {
                    sum *= arr[2] * arr[3];
                    sum*=arr[n-1];
                    if (temp > sum)
                    {
                        sum = temp;
                    }
                }
                else 
                {
                    sum *= arr[n - 1] * arr[n - 2];
                    sum*= arr[n-3];
                    if (temp > sum)
                    {
                        sum = temp;
                    }
                }
            }
                
            else
            {
                sum *= arr[n - 1] * arr[n - 2];
                if (arr[0] * arr[1] >= arr[n - 3] * arr[n - 4])
                {
                    sum *= arr[0] * arr[1];
                    sum*=arr[n-3];
                    if (temp > sum)
                    {
                        sum = temp;
                    }
                }
                else
                {
                    sum *= arr[n - 3] * arr[n - 4];
                    sum*=arr[n-2];
                    if (temp > sum)
                    {
                        sum = temp;
                    }
                }
            }
            
                
        }
    }
    cout<<sum<<endl;
    
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
