
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
    ll n, m;
    cin >> n >> m;
    ll arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    ll cnt = 0, sum = 0, temp = 0;
    sum = arr[0] - 1;
    for (int i = 1; i < m; i++)
    {

        if (arr[i] >= arr[i - 1])
        {

            sum += arr[i] - arr[i - 1];
        }
        else if (arr[i] < arr[i - 1])
        {

            temp = n - arr[i - 1];
            sum += temp + arr[i];
        }
    }
    cout << sum << endl;
}
