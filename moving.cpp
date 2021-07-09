#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x[210],y[210],k=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++){
		int a=0,b=0,c=0,d=0;
		for(int j=0;j<n;j++){
                cout<<"i & j : "<<i<<" " << j<<endl;
			if(x[j]>x[i] && y[j]==y[i]) a++;
			if(x[j]<x[i] && y[j]==y[i]) b++;
			if(x[j]==x[i] && y[j]>y[i]) c++;
			if(x[j]==x[i] && y[j]<y[i]) d++;
		}
		if(a && b && c && d) k++;
	}
	cout<<k<<endl;
	return 0;
}
