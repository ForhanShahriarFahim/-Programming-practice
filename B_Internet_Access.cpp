
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
    string str;
    cin >> str;
    int index = 0, cnt = 0;
    ;
    if (str[0] == 'h')
    {
        cout << "http://";
        index = 4;
    }
    else
    {
        cout << "ftp://";
        index = 3;
    }

    while (1)
    {
        if (str[index] == 'r' && str[index + 1] == 'u' && cnt > 0)
            break;

        cout << str[index];
        index++;
        cnt++;
    }
    cout << ".ru";
    index += 2;
    if (index == str.length())
        return 0;
    cout << "/";
    while (index < str.length())
    {
        cout << str[index];
        index++;
    }
}