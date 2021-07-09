
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
    int test;
    cin >> test;
    while (test--)
    {
        int n, cnt = 0, checker = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 2; i++)
        {

            for (int j = i + 2; j < n; j++)
            {

                if (arr[i] == arr[j])
                {

                    checker = 1;
                    break;
                }
            }
        }
        if (checker)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}