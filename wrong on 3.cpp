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

     ll i,j,cnt=0;
     ll n,x;
     cin>>n;
     vector<ll> a;
     for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=1;j<=sqrt(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                cnt++;
                if(a[i]/j != j)
                    cnt++;
            }
            if(cnt>3)
            {
                cout<<"NO"<<endl;
                break;
           }
        }
        if(cnt==3)
            cout<<"YES"<<endl;
        else if(cnt<3)
            cout<<"NO"<<endl;
    }
return 0;
}
