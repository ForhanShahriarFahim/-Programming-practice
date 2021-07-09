#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
     int n,i,a,b,f=0,g=0,arr[10004];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        arr[i]=a;
        if(a!=b)f=1;
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            g=1;
        }
    }
    if(f==1)cout<<"rated"<<endl;
    else
    {
        if(g==1)cout<<"unrated"<<endl;
        else cout<<"maybe"<<endl;
    }
    return 0;
}
