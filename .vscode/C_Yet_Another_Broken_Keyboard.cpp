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
    ll cnt=0,leng=0,sum = 0;
    string str;
    char ch;
    map<char,int>mp;
    ll n,k;
    cin>>n>>k>>str;
    for(int i=0;i<k;i++)
    {
        cin>>ch;
        mp[ch] = 1;
    }

    for(int i=0;i<n;i++)
    {
        if(mp[str[i]]==1)
        {
            leng++;
        }

        else
        {
            sum+=((leng*(leng+1))/2);
            leng=0;
        }
        
    }
    if(leng>0)
    {
        sum += ((leng * (leng + 1)) / 2);
    }
    
    cout<<sum<<endl;


}