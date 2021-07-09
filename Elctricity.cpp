#include <bits/stdc++.h>
typedef long long ll;
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
    //c_p_c();
    FastIO;

	int n,m,a;
	cin>>n>>m;
	int ans[n+1]={0};
	for(int i=0;i<m;i++)
	{
		int max = -1;
		int imax = 1;
		for(int j=0;j<n;j++)
		{
			cin>>a;
			if(a>max)
			{
				max = a;
				imax = j+1;
			}
		}
		ans[imax]++;
	}
	int max = -1,imax;
	for(int i=1;i<n+1;i++)
	{
		if(max<ans[i])
		{
			max = ans[i];
			imax = i;
		}
	}
	cout<<imax<<endl;

}

