#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,sign=0,sum=0,check=0;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<0)
		{
			sign++;
			sum+=abs(arr[i]+1);
		}
		else if(arr[i]==0)
		{
		    sum=sum+1;
		    check=1;
		}
		else
		{
			sum+=arr[i]-1;
		}
	}
	if(sign%2!=0)
	{
		if(check!=1)
			sum+=2;
	}
	cout<<sum<<endl;
	return 0;
}
