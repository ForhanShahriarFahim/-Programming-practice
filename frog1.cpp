#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n==0)
	cout<<0;
	else
	{
	int a[n];
	int dp[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	dp[0]=0;
	dp[1]= a[1]-a[0];
	for(int i=2;i<n;i++)
	{
	    dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]) , dp[i-2]+abs(a[i]-a[i-2]));
	}
	cout<<dp[n-1];
	}
	return 0;
}
