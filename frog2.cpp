#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
   FastIO;
   int n;
	cin>>n;
  	int a,b,c;
  int arr[n];
  for(int i=0;i<n;i++){
    if(i<=1){
      	if(i==0){
          cin>>a;
          arr[0]=0;
        }
    	if(i==1){
          cin>>b;
          arr[1]=abs(b-a);
        }
    }
    else{
      	a=b;
        b=c;
        cin>>c;
        arr[i]=min(arr[i-1]+abs(c-b), arr[i-2]+abs(c-a));
     }

  }
  cout << arr[n-1]<<endl;
  return 0;
}
