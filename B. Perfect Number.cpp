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
   int k=1,n,ans=19,t,sum;
   cin >> n ;
	while (k<n)
	{
		ans++;
		t=ans,sum=0;
		while(t>0)
		{
			sum +=t%10;
			t/=10 ;
		}
		if (sum==10)
			k++;
	}
	cout<<ans<<endl;
	return 0;
}
