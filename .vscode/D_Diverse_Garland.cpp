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
    string arr;
    cin>>n>>arr;
   // int arr[n+2] = {0};

    int cnt=0;
    if(n==1)
    {
        cout<<cnt<<endl;
        cout<<arr<<endl;
        return 0;
    }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1] && arr[i] == arr[i + 1])
            {
                cnt++;
                if (arr[i] == 'R')
                    arr[i] = 'G';
                else if (arr[i] == 'G')
                    arr[i] = 'R';
                else
                {
                    arr[i] = 'G';
                }

                i++;
            }
            else if (arr[i] == arr[i - 1])
            {
                cnt++;
                if (arr[i] == 'R' && arr[i + 1] == 'B')
                {
                    arr[i] = 'G';
                    i++;
                }
                else if(arr[i]=='R' && arr[i+1]=='G')
                {
                    arr[i] = 'B';
                    i++;
                }
                else if (arr[i] == 'G' && arr[i + 1] == 'R')
                {
                    arr[i] = 'B';
                    i++;
                }
                else if(arr[i]=='G'&& arr[i+1]=='B')
                {
                    arr[i] = 'R';
                    i++;
                }                   
                else if (arr[i] == 'B' && arr[i + 1] == 'G')
                {
                    arr[i] = 'R';
                    i++;
                }
                else if(arr[i]=='B' && arr[i+1]=='R')
                {
                    arr[i] = 'G';
                    i++;
                }
                    
                else
                {
                    if (arr[i - 1] == 'R')
                        arr[i] = 'G';
                    else if (arr[i - 1] == 'G')
                        arr[i] = 'R';
                    else
                        arr[i] = 'R';
                }
            }
        }
    cout<<cnt<<endl;
    cout<<arr<<endl;
    
}

