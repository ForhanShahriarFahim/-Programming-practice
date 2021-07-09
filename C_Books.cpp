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
    int inp,i,n,k;
    vector<int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        v.pb(inp);
    }
    sort(v.begin(),v.end());
    if(k==0)
    {
        if(v[0]>1)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }
    else if(v[k-1]==v[k])
        cout<<"-1"<<endl;
    else
        cout<<v[k-1]<<endl;
    return 0;
}

