/* In the name of Allah */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m,num;
	string s;
	cin>>n>>m>>s;
	int arr[n]={0};
	for(int i=0;i<m;i++){
		cin>>num;
		arr[num-1]++;
		cout<<arr[0]<<endl;
	}
	arr[n-1]++;
	int sum=0;
	int ch[26]={0};
	for(int i=n-1;i>=0;i--){
		sum+=arr[i];
			ch[s[i]-'a']+=sum;
	}
	for(int i=0;i<26;i++){
		cout<<ch[i]<<" ";
	}
	cout<<endl;
	}

	return 0;
}

