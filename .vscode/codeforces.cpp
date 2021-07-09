
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007 
typedef long long ll;
 
int main(void)
{
	ios_base::sync_with_stdio(false);    
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1),v(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	set<int> z;
	
	for(int i=n;i>=1;i--)
	{
		z.insert(a[i]);
		v[i]=z.size();
	}
	int x;
	while(m--)
	{
		cin>>x;
		cout<<v[x]<<"\n";
	}
	
	return 0;
}