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
    ll n, s, t;
	int test;
	cin>>test;
	while(test--)
	{
		cin>>n>>s>>t;
		cout<<n+1-min(s,t)<<endl;
	}
}

