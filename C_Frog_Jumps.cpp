
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
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin >>str;
        int l = str.size();
        int mx=0,checker=0,cnt=1;
        for(int i=0;i<l;i++)
        {
            if(str[i]=='L')
            {
               cnt++;
               
               mx = max(cnt,mx);
               checker = 1;
            }
            else 
            {
                
                cnt = 1;
            }
        }
        if(checker==1)
        cout<<mx<<endl;
        else 
        cout<<cnt<<endl;
    }
    
}