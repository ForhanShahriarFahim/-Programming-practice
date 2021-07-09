#include<stdio.h>
int main()
{
	long long int t[100000],n,i,s,count=1;
	scanf("%lld %lld",&n,&s);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&t[i]);
	}
	for(i=1;i<n;i++)
	{
		if((t[i]-t[i-1])<=s)
		count++;
		else
		count=1;
	}
	printf("%lld",count);
	return 0;
}

