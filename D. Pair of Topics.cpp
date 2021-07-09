#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
    FastIO;
	int n;
	cin >> n;

	vector<ll> arr(n),b(n);
	for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

	for(int i=0;i<n;i++)
    {
       cin >> b[i];
    }


	vector<int> c(n);
	for(int i=0;i<n;i++)
    {
        c[i] = arr[i]-b[i];
    }


	sort(c.begin(),c.end());

	ll cnt = 0,l=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]>0)
		{
			l = lower_bound(c.begin(),c.end(),-c[i]+1)-c.begin();

			cnt+=(i-1);

		}
	}
	cout << cnt << endl;
	return 0;
}
