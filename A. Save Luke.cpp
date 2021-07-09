#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	b = b-a,c=c+d;
	b = b/c;
	cout<<fixed<<setprecision(10)<<b<<endl;
}
