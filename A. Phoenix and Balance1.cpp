#include <bits/stdc++.h>
typedef long long ll;
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;
    int t;
    cin>>t;
    ll arr[100];
    while(t--)
    {
        int n;
        ll sum=0,maximum=0,minimum;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            arr[i] = pow(2,i);
            sum+=arr[i];
        }
       // cout<<sum<<endl;
        int d = n/2;

        for(int i=1;i<=d-1;i++)
        {
            maximum += arr[i];
        }
        maximum += arr[n];
        minimum = sum - maximum;
        cout<<maximum-minimum<<endl;
    }

}

