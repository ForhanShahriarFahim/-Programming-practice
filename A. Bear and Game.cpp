
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,t=0;
	cin>>n;
	int arr[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	arr[0]=0;
	for(i=0;i<n;i++)
	{
		if((arr[i+1]-arr[i])<=15)
		{
			t=arr[i+1];
		}
		else if((arr[i+1]-arr[i])>15)
		{
			t=arr[i]+15;
			if(t>90)
			{
				cout<<"90";
				return 0;
			}
			else
            {
            cout<<t;
            return 0;
            }
		}
	}
	if((t+15)<90)
	{

	cout<<t+15<<endl;
	}
	else cout<<"90";
	return 0;

}
