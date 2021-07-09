#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int num;cin>>num;
		int candies[1003] = {0};
		for(int i=0;i<num;i++) cin>>candies[i];
		int move=0,a=0,b=0;
		int i=0,j=num-1;
		int last = 0;
		bool al = 1;
		while(i<=j){
			move+=1;
			int d = 0;
			if(al){
				while(d<=last && i<=j) d+=candies[i++];
				last = d;
				a+=d;
				al=0;
			}else{
				while(d<=last && i<=j) d+=candies[j--];
				last = d;
				b+=d;
				al=1;
			}
		}
		cout<<move<<" "<<a<<" "<<b<<endl;
	}
	return 0;
}
