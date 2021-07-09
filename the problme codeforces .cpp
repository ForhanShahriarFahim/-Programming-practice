#include<bits/stdc++.h>
using namespace std;
int n,m,k,x,ans;
vector<int> g[10000];
bool visited[10000],check;
void dfs(int i)
{
	visited[i]=true;
	for(int j=0;j<g[i].size();j++)
	{
		if(!visited[g[i][j]])
		{
			dfs(g[i][j]);
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
    	cin>>k;
		if(k>0)
		{
			check=true;
		}
		for(int j=0;j<k;j++)
		{
			cin>>x;
			g[i].push_back(n+x);
			g[n+x].push_back(i);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			ans++;
			dfs(i);
		}
	}
	cout<<ans-check;
}

