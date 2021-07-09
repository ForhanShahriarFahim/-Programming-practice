
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
    string str, b = "heidi";
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == b[cnt])
            cnt++;
    }
    if (cnt == 5)
        cout << "YES";
    else
    {
        cout << "NO";
    }
}