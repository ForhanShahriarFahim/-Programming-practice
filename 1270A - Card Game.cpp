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
   int t,n,k1,k2,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k1>>k2;
		for(int j=0;j<k1;j++)
		{
			cin>>x;
			if(x==n)
			{
				cout<<"YES"<<endl;
			}
		}
		for(int j=0;j<k2;j++)
		{
			cin>>x;
			if(x==n)
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
