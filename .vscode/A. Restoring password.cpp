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

    string s[10];
    string a;
    cin >> a;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < a.length(); i = i + 10)
    {
        string t = a.substr(i, 10);
        for (j = 0; j < 10; j++)
        {
            if (s[j] == t)
            {
                cout << j;
            }
        }
    }
    return 0;
}