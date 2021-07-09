#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
     FastIO;

    string str[11];
    string arr;
    cin >> arr;

    for (int i=0;i<10;i++)
    {
        cin>>str[i];
    }
    for (int i=0;i<arr.length();i=i+10)
    {
        string t=arr.substr(i,10);
        for (int j=0;j<10;j++)
        {
            if (str[j]==t)
            {
                cout<<j;
            }
        }
    }
    return 0;
}
