
#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	string x[n];
	for(int i=0;i<n;i++)
	cin>>x[i];
	int flag[n]={0};
	int max[m]={0};
	for(int j=0;j<m;j++)
	for(int i=0;i<n;i++)
	{
	    if(x[i][j]>max[j])  max[j]=x[i][j];
	    cout<<"index: "<<j<<" "<<max[j]<<endl;
	}
	//for(int i=0;i<n;i++)

	int count=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    if(x[i][j]==max[j]) flag[i]=1;

	    if(flag[i]) count++;
	}
	cout<<count;
	return 0;
}
