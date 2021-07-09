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
    ll n,two = 2,greater=0,situation=0,zero=0;
    bool flag1= true, flag2 = true, flag3=true, flag4 = true;
     cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0 && flag1)
        {
            cout<<1<<" "<<arr[i]<<endl;
            flag1 = false;
            arr[i] = mod;
        }
        else if(arr[i]<0)
        {
            situation++;
        }
        else if(arr[i]>0)
        {
            greater++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(situation%2==0)
        {
            if(flag2)
            {
                cout<<(n-1)-zero<<" ";
                flag2 = false;
            }
            if(arr[i]!=0 && arr[i]!=mod)
            {
                cout<<arr[i]<<" ";
            }
        }
        else if(situation%2!=0 && situation>1)
        {
            if(flag3)
            {
                cout<<greater+2<<" ";
                flag3 = false;
            }
            if(arr[i]!=0 && arr[i]!=mod)
            {
                if(arr[i]<0 && two)
                {
                    cout<<arr[i]<<" ";
                    arr[i] = mod;
                    two--;
                }
                else if(arr[i]>0)
                cout<<arr[i]<<" ";
                
            }
        }
        else if (situation % 2 != 0 && situation == 1)
        {
            if(flag4)
            {
                cout<<greater<<" ";
                flag4 = false;
            }
            if(arr[i]>0 && arr[i]!=mod)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<endl;
    if(situation%2==0)
    {
        cout<<zero<<" ";
        for(int i=0;i<zero;i++)
        {
            cout<<0<<" ";
        }
    }
    else if(situation%2!=0 && situation==1)
    {
        cout<<zero+1<<" ";
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    else if(situation%2!=0 && situation>1)
    {
        cout<<n-(greater+3)<<" ";
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<endl;
}

