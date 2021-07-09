#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        double n,d;
        cin>>n>>d;
        int half;
         double div, sum = 0;
        half = n/2;
        int  temp;
         temp = ceil(d/(half+1));


        
        //cout<<temp<<endl;
        sum = temp+half;
        if(sum<=n)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;

    }
}