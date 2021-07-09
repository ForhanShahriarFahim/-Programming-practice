//🙂🙂🙂
#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
    FastIO;
    int n, t;
    cin >> n >> t;
    int a[n], i, cnt = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //sort(a, a + n);
    int k = 0; //book start to read
    int sum = 0;
    for (i = 0; i < n; i++) //start arbitrary i and i+1
    {
        sum += a[i];
        if (sum <= t)
            cnt++;
        else
        {
            sum = sum - a[k];
            k++;
        }
    }
    cout << cnt << endl;
}
