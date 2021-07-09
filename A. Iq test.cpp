
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
    vector<string> arr(4);
    for (int i = 0; i <4; i++)
    {
       cin>>arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int flag = 0, cnt = 0;
            if (arr[i][j] == '#')
                flag++;
            else
                cnt++;
            if (arr[i + 1][j] == '#')
                flag++;
            else
                cnt++;
            if (arr[i][j + 1] == '#')
                flag++;
            else
                cnt++;
            if (arr[i + 1][j + 1] == '#')
                flag++;
            else
                cnt++;
            if (flag >=3 || cnt >=3)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}
