#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100]={},x=0,y=0,z=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i+=3)
	{
		x+=a[i];
		y+=a[i+1];
		z+=a[i+2];
	}
	if(x>=y&&x>=z)
	   cout<<"chest";
	if(y>=x&&y>=z)
	   cout<<"biceps";
	if(z>=y&&z>=x)
	   cout<<"back";
	return 0;
}
