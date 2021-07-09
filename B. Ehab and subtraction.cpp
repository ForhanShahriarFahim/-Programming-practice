#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;

   int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }


    sort(arr , arr+n);
    cout << arr[0] <<endl;

    k--;
    for(int i=1;i<n;i++)
    {
        if(arr[i] - arr[i-1]>0 && k>0)
        {
            cout << arr[i] - arr[i-1] <<endl;
            k--;
        }
    }
    k--;
    while(k--)
    {
        cout << 0 << endl;
    }
    return 0;

}
